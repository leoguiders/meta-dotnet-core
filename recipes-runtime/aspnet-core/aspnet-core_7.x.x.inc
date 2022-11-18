###################################################################################################
# Contains additional parameters for the recipe to download the release binaries from Microsoft
# pertaining to all 7.x.x versions.
# Original version Copyright Richard Dunkley 2020
# Modified for 7.0.0 by Jan Philipp Giel 2022
###################################################################################################
DESCRIPTION = "This does not build this version, it only pulls the binaries from Microsoft"
BUGTRACKER = "https://github.com/aspnet/AspNetCore/issues"
SECTION = "runtime"

S = "${WORKDIR}/aspnet-${PV}"

require recipes-runtime/aspnet-core/aspnet-core_mit_7.x.x.inc

RPROVIDES:${PN} = "dotnet-core"

DEPENDS = "patchelf-native"

#FIXME add lttng-ust as soon as dotnet core supports liblttng-ust.so.1
RDEPENDS:${PN} = "icu zlib libgssglue krb5 libgssapi-krb5"

INSANE_SKIP:${PN} += "already-stripped libdir textrel staticdev"
INSANE_SKIP:${PN}-dbg += "libdir"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

#PACKAGES =+ "${PN}-dbg ${PN}-staticdev ${PN}"

#FILES:${PN} += "${datadir}"
#FILES:${PN} += ""

FILES:${PN} += " \
	${datadir}/dotnet \
	/usr/local/share/dotnet \
	/usr/share/dotnet \
	"

do_install:prepend () {
	install -d ${D}${bindir}
	install -d ${D}${datadir}/dotnet/
	install -m 0755 ${S}/dotnet ${D}${datadir}/dotnet/
	install -m 0644 ${S}/LICENSE.txt ${D}${datadir}/dotnet/
	install -m 0644 ${S}/ThirdPartyNotices.txt ${D}${datadir}/dotnet/

	install -d ${D}${datadir}/dotnet/host/fxr/${PV}/
	install -m 0755 ${S}/host/fxr/${PV}/libhostfxr.so ${D}${datadir}/dotnet/host/fxr/${PV}/

	install -d ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${PV}/
	
	install -m 0644 ${S}/shared/Microsoft.AspNetCore.App/${PV}/.version ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${PV}/.version
	install -m 0644 ${S}/shared/Microsoft.AspNetCore.App/${PV}/THIRD-PARTY-NOTICES.txt ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${PV}/THIRD-PARTY-NOTICES.txt
	for file in ${S}/shared/Microsoft.AspNetCore.App/${PV}/*.dll; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${PV}/
	done
	for file in ${S}/shared/Microsoft.AspNetCore.App/${PV}/*.json; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${PV}/
	done
	for file in ${S}/shared/Microsoft.AspNetCore.App/${PV}/*.txt; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.AspNetCore.App/${PV}/
	done

	install -d ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${PV}/
	
	install -m 0644 ${S}/shared/Microsoft.NETCore.App/${PV}/.version ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${PV}/.version
	install -m 0644 ${S}/shared/Microsoft.NETCore.App/${PV}/createdump ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${PV}/createdump
	for file in ${S}/shared/Microsoft.NETCore.App/${PV}/*.so; do
		install -m 0755 "$file" ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${PV}/
	done
	for file in ${S}/shared/Microsoft.NETCore.App/${PV}/*.dll; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${PV}/
	done
	for file in ${S}/shared/Microsoft.NETCore.App/${PV}/*.json; do
		install -m 0644 "$file" ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${PV}/
	done

	install -d ${D}/usr/local/share

	# Hack to fix liblttng-ust dependency issues
	patchelf --remove-needed liblttng-ust.so.0 ${D}${datadir}/dotnet/shared/Microsoft.NETCore.App/${PV}/libcoreclrtraceptprovider.so
}

do_install:append() {
	cd ${D}/usr/local/share
	ln -s ../../share/dotnet ${D}/usr/local/share

	cd ${D}${bindir}
	ln -s ../share/dotnet/dotnet ${D}${bindir}/dotnet
}


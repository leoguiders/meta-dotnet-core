###################################################################################################
# Contains additional parameters for the recipe to download the release binaries from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 6.0.9 by Jan Philipp Giel 2022
###################################################################################################
SUMMARY = "Contains the binaries for Microsoft's ASP .NET Core 6.0.9"
HOMEPAGE = "https://dotnet.microsoft.com/download/dotnet-core/6.0"

DOTNET_RUNTIME_ARCH = "none"
DOTNET_RUNTIME_ARCH:arm = "arm"
DOTNET_RUNTIME_ARCH:x86_64 = "x64"
DOTNET_RUNTIME_ARCH:aarch64 = "arm64"

# This is here because it doesn't seem like bitbake likes ${PV} used in require statements.
require recipes-runtime/aspnet-core/aspnet-core_6.0.9_${DOTNET_RUNTIME_ARCH}.inc

###################################################################################################
# Contains the URL and checksums to download version 5.0.11 of the ARM .Net Core runtime from
# Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 5.0.11 by Jan Philipp Giel 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/42213f70-6317-4b02-a3b9-3d4dbe301b0a/f13a87a5bb4af3259ea552c0e7b3244e/dotnet-runtime-5.0.11-linux-arm.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "712cbf404ac65960f5d17599b018dc2f"
SRC_URI[sha256sum] = "6fef7f5dc91aa82a5ad33e131298afa405bbce7b02f69936d047265493c65ca8"

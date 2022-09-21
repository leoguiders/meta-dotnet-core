###################################################################################################
# Contains the URL and checksums to download version 6.0.9 of the ARM 64-bit .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 6.0.9 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/2dc40bad-57b6-42ae-b9dd-bd457af4e73e/b95f86d6f9cf49e156227bad231d4aa0/dotnet-runtime-6.0.9-linux-arm64.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "78535f89c1995e63eb0d1ce11a69bb55"
SRC_URI[sha256sum] = "d921d5ccf2f543a625e7d638af4b96d386ffd1fe7a38d2f38bd0f0fcca6fa834"


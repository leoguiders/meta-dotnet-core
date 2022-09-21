###################################################################################################
# Contains the URL and checksums to download version 6.0.9 of the ARM ASP .Net Core runtime from
# Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 6.0.9 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/eb46a420-96cb-4600-95b4-40496349fdf8/f33af6a90cc721adca490d69fa9d0e98/aspnetcore-runtime-6.0.9-linux-arm.tar.gz;subdir=aspnet-${PV}"

SRC_URI[md5sum] = "59a3eddd974c3a16cddcdaccb080d3fc"
SRC_URI[sha256sum] = "09b3fd3738ab48cb2738b25bb24cd352fa264a43010843713f5a4d89bbfe7033"

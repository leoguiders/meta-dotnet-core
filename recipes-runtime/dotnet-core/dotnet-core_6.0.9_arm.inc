###################################################################################################
# Contains the URL and checksums to download version 6.0.9 of the ARM .Net Core runtime from
# Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 6.0.9 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/9fdc5a53-a4be-45a3-8a38-95877cc521a9/60899abe1ad0deb7ebf2def2617fc5c3/dotnet-runtime-6.0.9-linux-arm.tar.gz;subdir=dotnet-${PV}"

SRC_URI[md5sum] = "29f3e313cc8e7b2b90bcfaa122704abc"
SRC_URI[sha256sum] = "7e7095a7d8834bdabe38f6bab90673cca30523c5b6c1bd00ad9f022d8f2baa04"

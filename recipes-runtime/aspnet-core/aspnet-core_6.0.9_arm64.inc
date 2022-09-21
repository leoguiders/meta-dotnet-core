###################################################################################################
# Contains the URL and checksums to download version 6.0.9 of the ARM 64-bit ASP .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 6.0.9 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/bff2e771-8180-47eb-b12a-757a67001e21/63a7f79af649efe65c20f2ca56834048/aspnetcore-runtime-6.0.9-linux-arm64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[md5sum] = "71ca2357482773a1b7cb25aac455182a"
SRC_URI[sha256sum] = "43b5536ab6f74911acafada4482add10d9544969f1ec9b3657424c421d58b912"

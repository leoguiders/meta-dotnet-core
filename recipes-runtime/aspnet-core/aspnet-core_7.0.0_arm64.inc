###################################################################################################
# Contains the URL and checksums to download version 7.0.0 of the ARM 64-bit ASP.NET Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 7.0.0 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/2d6d851a-4eea-4a7a-9d5e-f1d6cdccda29/366a3dd90251ce11d8c5191ae9633efc/aspnetcore-runtime-7.0.0-linux-arm64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[sha512sum] = "ffee38cb0c8fd3ba20f3d814b7e141f94be18620eb91a229b80d7c609f6cad77efb7f8f276e9fbee4f3ed8cce33cc0659f0dc77faeb8f5427c95deead97275d7"

###################################################################################################
# Contains the URL and checksums to download version 7.0.0 of the x86 64-bit ASP.NET Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 7.0.0 by Jan Philipp Giel 2022
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/4bbb4d31-70ba-4def-b747-4358be873982/3dbca5b64c2ffb88641c0e42bdeb297a/aspnetcore-runtime-7.0.0-linux-x64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[sha512sum] = "02ce2e0b3c4b1d0eb0d9bdb9517a3293404b2a1aaf23311e305b856bb15723414f6328887788b875f0f80361f3e195c872ea3984971e5f0ab1ad5de43950d707"

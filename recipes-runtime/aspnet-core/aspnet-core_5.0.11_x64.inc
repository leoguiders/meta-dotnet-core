###################################################################################################
# Contains the URL and checksums to download version 5.0.11 of the x86 64-bit ASP .Net Core runtime
# from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 5.0.11 by Jan Philipp Giel 2021
###################################################################################################
SRC_URI = "https://download.visualstudio.microsoft.com/download/pr/ac2cec9e-f5ab-44db-8fa9-aba5e5cf7378/956dac1b6510675a0ae8705918e22df7/aspnetcore-runtime-5.0.11-linux-x64.tar.gz;subdir=aspnet-${PV}"

SRC_URI[md5sum] = "edfff012355472598f6bf428d043fb81"
SRC_URI[sha256sum] = "e8afced6086cf8806ac286467957d4a600807821875d46c6075f8f6b32735179"

###################################################################################################
# Contains additional parameters for the recipe to download the release binaries from Microsoft.
# Original version Copyright Richard Dunkley 2020
# Modified for 5.0.11 by Jan Philipp Giel 2021
###################################################################################################
SUMMARY = "Contains the binaries for Microsoft's ASP .NET Core 5.0.11"
HOMEPAGE = "https://dotnet.microsoft.com/download/dotnet-core/5.0"

DOTNET_RUNTIME_ARCH = "none"
DOTNET_RUNTIME_ARCH_arm = "arm"
DOTNET_RUNTIME_ARCH_x86_64 = "x64"
DOTNET_RUNTIME_ARCH_aarch64 = "arm64"

# This is here because it doesn't seem like bitbake likes ${PV} used in require statements.
require recipes-runtime/aspnet-core/aspnet-core_5.0.11_${DOTNET_RUNTIME_ARCH}.inc

--- content/browser/utility_sandbox_delegate.cc.orig	2024-10-28 21:05:17 UTC
+++ content/browser/utility_sandbox_delegate.cc
@@ -78,10 +78,10 @@ UtilitySandboxedProcessLauncherDelegate::
 #if BUILDFLAG(IS_FUCHSIA)
       sandbox_type_ == sandbox::mojom::Sandbox::kVideoCapture ||
 #endif
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
       sandbox_type_ == sandbox::mojom::Sandbox::kHardwareVideoDecoding ||
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH)
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
       sandbox_type_ == sandbox::mojom::Sandbox::kHardwareVideoEncoding ||
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 #if BUILDFLAG(IS_CHROMEOS_ASH)
@@ -156,10 +156,10 @@ ZygoteCommunication* UtilitySandboxedProcessLauncherDe
   // process upon startup.
   if (sandbox_type_ == sandbox::mojom::Sandbox::kNetwork ||
       sandbox_type_ == sandbox::mojom::Sandbox::kOnDeviceModelExecution ||
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH) || BUILDFLAG(IS_BSD)
       sandbox_type_ == sandbox::mojom::Sandbox::kHardwareVideoDecoding ||
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_ASH)
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
       sandbox_type_ == sandbox::mojom::Sandbox::kHardwareVideoEncoding ||
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
 #if BUILDFLAG(IS_CHROMEOS_ASH)

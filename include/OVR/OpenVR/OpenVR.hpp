#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "OVR/OpenVR/AppOverrideKeys_t.hpp"
#include "OVR/OpenVR/COpenVRContext.hpp"
#include "OVR/OpenVR/CVRApplications.hpp"
#include "OVR/OpenVR/CVRChaperone.hpp"
#include "OVR/OpenVR/CVRChaperoneSetup.hpp"
#include "OVR/OpenVR/CVRCompositor.hpp"
#include "OVR/OpenVR/CVRDriverManager.hpp"
#include "OVR/OpenVR/CVRExtendedDisplay.hpp"
#include "OVR/OpenVR/CVRIOBuffer.hpp"
#include "OVR/OpenVR/CVRInput.hpp"
#include "OVR/OpenVR/CVRNotifications.hpp"
#include "OVR/OpenVR/CVROverlay.hpp"
#include "OVR/OpenVR/CVRRenderModels.hpp"
#include "OVR/OpenVR/CVRResources.hpp"
#include "OVR/OpenVR/CVRScreenshots.hpp"
#include "OVR/OpenVR/CVRSettingHelper.hpp"
#include "OVR/OpenVR/CVRSettings.hpp"
#include "OVR/OpenVR/CVRSpatialAnchors.hpp"
#include "OVR/OpenVR/CVRSystem.hpp"
#include "OVR/OpenVR/CVRTrackedCamera.hpp"
#include "OVR/OpenVR/CameraVideoStreamFrameHeader_t.hpp"
#include "OVR/OpenVR/ChaperoneCalibrationState.hpp"
#include "OVR/OpenVR/Compositor_CumulativeStats.hpp"
#include "OVR/OpenVR/Compositor_FrameTiming.hpp"
#include "OVR/OpenVR/Compositor_OverlaySettings.hpp"
#include "OVR/OpenVR/D3D12TextureData_t.hpp"
#include "OVR/OpenVR/DistortionCoordinates_t.hpp"
#include "OVR/OpenVR/DriverDirectMode_FrameTiming.hpp"
#include "OVR/OpenVR/EChaperoneConfigFile.hpp"
#include "OVR/OpenVR/EChaperoneImportFlags.hpp"
#include "OVR/OpenVR/ECollisionBoundsStyle.hpp"
#include "OVR/OpenVR/EColorSpace.hpp"
#include "OVR/OpenVR/EDeviceActivityLevel.hpp"
#include "OVR/OpenVR/EDualAnalogWhich.hpp"
#include "OVR/OpenVR/EGamepadTextInputLineMode.hpp"
#include "OVR/OpenVR/EGamepadTextInputMode.hpp"
#include "OVR/OpenVR/EHiddenAreaMeshType.hpp"
#include "OVR/OpenVR/EIOBufferError.hpp"
#include "OVR/OpenVR/EIOBufferMode.hpp"
#include "OVR/OpenVR/EOverlayDirection.hpp"
#include "OVR/OpenVR/ETextureType.hpp"
#include "OVR/OpenVR/ETrackedControllerRole.hpp"
#include "OVR/OpenVR/ETrackedDeviceClass.hpp"
#include "OVR/OpenVR/ETrackedDeviceProperty.hpp"
#include "OVR/OpenVR/ETrackedPropertyError.hpp"
#include "OVR/OpenVR/ETrackingResult.hpp"
#include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
#include "OVR/OpenVR/EVRApplicationError.hpp"
#include "OVR/OpenVR/EVRApplicationProperty.hpp"
#include "OVR/OpenVR/EVRApplicationTransitionState.hpp"
#include "OVR/OpenVR/EVRApplicationType.hpp"
#include "OVR/OpenVR/EVRButtonId.hpp"
#include "OVR/OpenVR/EVRComponentProperty.hpp"
#include "OVR/OpenVR/EVRCompositorError.hpp"
#include "OVR/OpenVR/EVRCompositorTimingMode.hpp"
#include "OVR/OpenVR/EVRControllerAxisType.hpp"
#include "OVR/OpenVR/EVRControllerEventOutputType.hpp"
#include "OVR/OpenVR/EVREventType.hpp"
#include "OVR/OpenVR/EVREye.hpp"
#include "OVR/OpenVR/EVRFirmwareError.hpp"
#include "OVR/OpenVR/EVRInitError.hpp"
#include "OVR/OpenVR/EVRInputError.hpp"
#include "OVR/OpenVR/EVRInputFilterCancelType.hpp"
#include "OVR/OpenVR/EVRMouseButton.hpp"
#include "OVR/OpenVR/EVRMuraCorrectionMode.hpp"
#include "OVR/OpenVR/EVRNotificationError.hpp"
#include "OVR/OpenVR/EVRNotificationStyle.hpp"
#include "OVR/OpenVR/EVRNotificationType.hpp"
#include "OVR/OpenVR/EVROverlayError.hpp"
#include "OVR/OpenVR/EVROverlayIntersectionMaskPrimitiveType.hpp"
#include "OVR/OpenVR/EVRRenderModelError.hpp"
#include "OVR/OpenVR/EVRScreenshotError.hpp"
#include "OVR/OpenVR/EVRScreenshotPropertyFilenames.hpp"
#include "OVR/OpenVR/EVRScreenshotType.hpp"
#include "OVR/OpenVR/EVRSettingsError.hpp"
#include "OVR/OpenVR/EVRSkeletalMotionRange.hpp"
#include "OVR/OpenVR/EVRSkeletalTransformSpace.hpp"
#include "OVR/OpenVR/EVRSpatialAnchorError.hpp"
#include "OVR/OpenVR/EVRState.hpp"
#include "OVR/OpenVR/EVRSubmitFlags.hpp"
#include "OVR/OpenVR/EVRTrackedCameraError.hpp"
#include "OVR/OpenVR/EVRTrackedCameraFrameLayout.hpp"
#include "OVR/OpenVR/EVRTrackedCameraFrameType.hpp"
#include "OVR/OpenVR/EVSync.hpp"
#include "OVR/OpenVR/HiddenAreaMesh_t.hpp"
#include "OVR/OpenVR/HmdColor_t.hpp"
#include "OVR/OpenVR/HmdMatrix33_t.hpp"
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
#include "OVR/OpenVR/HmdMatrix44_t.hpp"
#include "OVR/OpenVR/HmdQuad_t.hpp"
#include "OVR/OpenVR/HmdQuaternion_t.hpp"
#include "OVR/OpenVR/HmdQuaternionf_t.hpp"
#include "OVR/OpenVR/HmdRect2_t.hpp"
#include "OVR/OpenVR/HmdVector2_t.hpp"
#include "OVR/OpenVR/HmdVector3_t.hpp"
#include "OVR/OpenVR/HmdVector3d_t.hpp"
#include "OVR/OpenVR/HmdVector4_t.hpp"
#include "OVR/OpenVR/IVRApplications.hpp"
#include "OVR/OpenVR/IVRChaperone.hpp"
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
#include "OVR/OpenVR/IVRCompositor.hpp"
#include "OVR/OpenVR/IVRDriverManager.hpp"
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
#include "OVR/OpenVR/IVRIOBuffer.hpp"
#include "OVR/OpenVR/IVRInput.hpp"
#include "OVR/OpenVR/IVRNotifications.hpp"
#include "OVR/OpenVR/IVROverlay.hpp"
#include "OVR/OpenVR/IVRRenderModels.hpp"
#include "OVR/OpenVR/IVRResources.hpp"
#include "OVR/OpenVR/IVRScreenshots.hpp"
#include "OVR/OpenVR/IVRSettings.hpp"
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
#include "OVR/OpenVR/IVRSystem.hpp"
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
#include "OVR/OpenVR/ImuSample_t.hpp"
#include "OVR/OpenVR/Imu_OffScaleFlags.hpp"
#include "OVR/OpenVR/InputAnalogActionData_t.hpp"
#include "OVR/OpenVR/InputDigitalActionData_t.hpp"
#include "OVR/OpenVR/InputOriginInfo_t.hpp"
#include "OVR/OpenVR/InputPoseActionData_t.hpp"
#include "OVR/OpenVR/InputSkeletalActionData_t.hpp"
#include "OVR/OpenVR/IntersectionMaskCircle_t.hpp"
#include "OVR/OpenVR/IntersectionMaskRectangle_t.hpp"
#include "OVR/OpenVR/NotificationBitmap_t.hpp"
#include "OVR/OpenVR/OpenVR.hpp"
#include "OVR/OpenVR/OpenVRInterop.hpp"
#include "OVR/OpenVR/RenderModel_ComponentState_t.hpp"
#include "OVR/OpenVR/RenderModel_ControllerMode_State_t.hpp"
#include "OVR/OpenVR/RenderModel_TextureMap_t.hpp"
#include "OVR/OpenVR/RenderModel_TextureMap_t_Packed.hpp"
#include "OVR/OpenVR/RenderModel_Vertex_t.hpp"
#include "OVR/OpenVR/RenderModel_t.hpp"
#include "OVR/OpenVR/RenderModel_t_Packed.hpp"
#include "OVR/OpenVR/SpatialAnchorPose_t.hpp"
#include "OVR/OpenVR/Texture_t.hpp"
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
#include "OVR/OpenVR/VRActiveActionSet_t.hpp"
#include "OVR/OpenVR/VRBoneTransform_t.hpp"
#include "OVR/OpenVR/VRControllerAxis_t.hpp"
#include "OVR/OpenVR/VRControllerState_t.hpp"
#include "OVR/OpenVR/VRControllerState_t_Packed.hpp"
#include "OVR/OpenVR/VREvent_ApplicationLaunch_t.hpp"
#include "OVR/OpenVR/VREvent_Chaperone_t.hpp"
#include "OVR/OpenVR/VREvent_Controller_t.hpp"
#include "OVR/OpenVR/VREvent_Data_t.hpp"
#include "OVR/OpenVR/VREvent_DualAnalog_t.hpp"
#include "OVR/OpenVR/VREvent_EditingCameraSurface_t.hpp"
#include "OVR/OpenVR/VREvent_HapticVibration_t.hpp"
#include "OVR/OpenVR/VREvent_InputActionManifestLoad_t.hpp"
#include "OVR/OpenVR/VREvent_InputBindingLoad_t.hpp"
#include "OVR/OpenVR/VREvent_Ipd_t.hpp"
#include "OVR/OpenVR/VREvent_Keyboard_t.hpp"
#include "OVR/OpenVR/VREvent_MessageOverlay_t.hpp"
#include "OVR/OpenVR/VREvent_Mouse_t.hpp"
#include "OVR/OpenVR/VREvent_Notification_t.hpp"
#include "OVR/OpenVR/VREvent_Overlay_t.hpp"
#include "OVR/OpenVR/VREvent_PerformanceTest_t.hpp"
#include "OVR/OpenVR/VREvent_Process_t.hpp"
#include "OVR/OpenVR/VREvent_Property_t.hpp"
#include "OVR/OpenVR/VREvent_Reserved_t.hpp"
#include "OVR/OpenVR/VREvent_ScreenshotProgress_t.hpp"
#include "OVR/OpenVR/VREvent_Screenshot_t.hpp"
#include "OVR/OpenVR/VREvent_Scroll_t.hpp"
#include "OVR/OpenVR/VREvent_SeatedZeroPoseReset_t.hpp"
#include "OVR/OpenVR/VREvent_SpatialAnchor_t.hpp"
#include "OVR/OpenVR/VREvent_Status_t.hpp"
#include "OVR/OpenVR/VREvent_TouchPadMove_t.hpp"
#include "OVR/OpenVR/VREvent_WebConsole_t.hpp"
#include "OVR/OpenVR/VREvent_t.hpp"
#include "OVR/OpenVR/VREvent_t_Packed.hpp"
#include "OVR/OpenVR/VRMessageOverlayResponse.hpp"
#include "OVR/OpenVR/VROverlayFlags.hpp"
#include "OVR/OpenVR/VROverlayInputMethod.hpp"
#include "OVR/OpenVR/VROverlayIntersectionMaskPrimitive_Data_t.hpp"
#include "OVR/OpenVR/VROverlayIntersectionMaskPrimitive_t.hpp"
#include "OVR/OpenVR/VROverlayIntersectionParams_t.hpp"
#include "OVR/OpenVR/VROverlayIntersectionResults_t.hpp"
#include "OVR/OpenVR/VROverlayTransformType.hpp"
#include "OVR/OpenVR/VRTextureBounds_t.hpp"
#include "OVR/OpenVR/VRTextureDepthInfo_t.hpp"
#include "OVR/OpenVR/VRTextureWithDepth_t.hpp"
#include "OVR/OpenVR/VRTextureWithPoseAndDepth_t.hpp"
#include "OVR/OpenVR/VRTextureWithPose_t.hpp"
#include "OVR/OpenVR/VRVulkanTextureData_t.hpp"
#ifdef __cpp_modules
                    export module OpenVR;
                    #endif
                

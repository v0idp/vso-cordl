#pragma once
// IWYU pragma private; include "NatSuite/Devices/WebCameraDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__ICameraDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__WebCamDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebCameraDevice)
namespace NatSuite::Devices {
class IMediaDevice;
}
namespace NatSuite::Devices {
class WebCameraDevice_WebCameraDeviceAttachment;
}
namespace NatSuite::Devices {
class WebCameraDevice___c__DisplayClass15_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct WebCamDevice;
}
namespace UnityEngine {
class WebCamTexture;
}
// Forward declare root types
namespace NatSuite::Devices {
class WebCameraDevice;
}
namespace NatSuite::Devices {
class WebCameraDevice_WebCameraDeviceAttachment;
}
namespace NatSuite::Devices {
class WebCameraDevice___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::WebCameraDevice);
MARK_REF_PTR_T(::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment);
MARK_REF_PTR_T(::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0);
// Dependencies UnityEngine.MonoBehaviour
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.WebCameraDevice/WebCameraDeviceAttachment
class CORDL_TYPE WebCameraDevice_WebCameraDeviceAttachment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field delegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegate, put=__cordl_internal_set_delegate)) ::System::Action*  delegate;

/// @brief Method Awake, addr 0x17fd7b4, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment* New_ctor() ;

/// @brief Method Update, addr 0x17fd820, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_delegate() const;

constexpr ::System::Action*& __cordl_internal_get_delegate() ;

constexpr void __cordl_internal_set_delegate(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x17fd83c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebCameraDevice_WebCameraDeviceAttachment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebCameraDevice_WebCameraDeviceAttachment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebCameraDevice_WebCameraDeviceAttachment(WebCameraDevice_WebCameraDeviceAttachment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebCameraDevice_WebCameraDeviceAttachment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebCameraDevice_WebCameraDeviceAttachment(WebCameraDevice_WebCameraDeviceAttachment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1773};

/// @brief Field delegate, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment, ___delegate) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment, 0x28>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.WebCameraDevice/<>c__DisplayClass15_0
class CORDL_TYPE WebCameraDevice___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::NatSuite::Devices::WebCameraDevice*  __4__this;

/// @brief Field startTask, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTask, put=__cordl_internal_set_startTask)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  startTask;

static inline ::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <StartRunning>b__0, addr 0x17fd844, size 0x214, virtual false, abstract: false, final false
inline void _StartRunning_b__0() ;

constexpr ::NatSuite::Devices::WebCameraDevice* const& __cordl_internal_get___4__this() const;

constexpr ::NatSuite::Devices::WebCameraDevice*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_startTask() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_startTask() ;

constexpr void __cordl_internal_set___4__this(::NatSuite::Devices::WebCameraDevice*  value) ;

constexpr void __cordl_internal_set_startTask(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

/// @brief Method .ctor, addr 0x17fd5a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebCameraDevice___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebCameraDevice___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebCameraDevice___c__DisplayClass15_0(WebCameraDevice___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebCameraDevice___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebCameraDevice___c__DisplayClass15_0(WebCameraDevice___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1774};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::NatSuite::Devices::WebCameraDevice*  _____4__this;

/// @brief Field startTask, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  ___startTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0, ___startTask) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0, 0x20>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies NatSuite.Devices.ICameraDevice, NatSuite.Devices.IMediaDevice, System.IEquatable`1<T>, System.Object, System.ValueTuple`2<T1, T2>, UnityEngine.WebCamDevice
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.WebCameraDevice
class CORDL_TYPE WebCameraDevice : public ::System::Object {
public:
// Declarations
using WebCameraDeviceAttachment = ::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment;

using __c__DisplayClass15_0 = ::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0;

/// @brief Field <frameRate>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameRate_k__BackingField, put=__cordl_internal_set__frameRate_k__BackingField)) int32_t  _frameRate_k__BackingField;

/// @brief Field <previewResolution>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewResolution_k__BackingField, put=__cordl_internal_set__previewResolution_k__BackingField)) ::System::ValueTuple_2<int32_t,int32_t>  _previewResolution_k__BackingField;

/// @brief Field attachment, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachment, put=__cordl_internal_set_attachment)) ::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment>  attachment;

/// @brief Field device, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityEngine::WebCamDevice  device;

 __declspec(property(get=get_frameRate, put=set_frameRate)) int32_t  frameRate;

 __declspec(property(get=get_frontFacing)) bool  frontFacing;

/// @brief Field pixelBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_pixelBuffer, put=__cordl_internal_set_pixelBuffer)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  pixelBuffer;

 __declspec(property(get=get_previewResolution, put=set_previewResolution)) ::System::ValueTuple_2<int32_t,int32_t>  previewResolution;

/// @brief Field previewTexture, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewTexture, put=__cordl_internal_set_previewTexture)) ::UnityW<::UnityEngine::Texture2D>  previewTexture;

 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_uniqueID)) ::StringW  uniqueID;

/// @brief Field webCamTexture, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_webCamTexture, put=__cordl_internal_set_webCamTexture)) ::UnityW<::UnityEngine::WebCamTexture>  webCamTexture;

/// @brief Convert operator to "::NatSuite::Devices::ICameraDevice"
constexpr operator  ::NatSuite::Devices::ICameraDevice*() noexcept;

/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr operator  ::NatSuite::Devices::IMediaDevice*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr operator  ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept;

/// @brief Method Equals, addr 0x17fd648, size 0xfc, virtual true, abstract: false, final true
inline bool Equals(::NatSuite::Devices::IMediaDevice*  other) ;

static inline ::NatSuite::Devices::WebCameraDevice* New_ctor(::UnityEngine::WebCamDevice  device) ;

/// @brief Method StartRunning, addr 0x17fd3a8, size 0x1f8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* StartRunning() ;

/// @brief Method StopRunning, addr 0x17fd5a8, size 0xa0, virtual true, abstract: false, final true
inline void StopRunning() ;

/// @brief Method ToString, addr 0x17fd744, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__frameRate_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__frameRate_k__BackingField() ;

constexpr ::System::ValueTuple_2<int32_t,int32_t> const& __cordl_internal_get__previewResolution_k__BackingField() const;

constexpr ::System::ValueTuple_2<int32_t,int32_t>& __cordl_internal_get__previewResolution_k__BackingField() ;

constexpr ::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment> const& __cordl_internal_get_attachment() const;

constexpr ::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment>& __cordl_internal_get_attachment() ;

constexpr ::UnityEngine::WebCamDevice const& __cordl_internal_get_device() const;

constexpr ::UnityEngine::WebCamDevice& __cordl_internal_get_device() ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& __cordl_internal_get_pixelBuffer() const;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& __cordl_internal_get_pixelBuffer() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_previewTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_previewTexture() ;

constexpr ::UnityW<::UnityEngine::WebCamTexture> const& __cordl_internal_get_webCamTexture() const;

constexpr ::UnityW<::UnityEngine::WebCamTexture>& __cordl_internal_get_webCamTexture() ;

constexpr void __cordl_internal_set__frameRate_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__previewResolution_k__BackingField(::System::ValueTuple_2<int32_t,int32_t>  value) ;

constexpr void __cordl_internal_set_attachment(::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment>  value) ;

constexpr void __cordl_internal_set_device(::UnityEngine::WebCamDevice  value) ;

constexpr void __cordl_internal_set_pixelBuffer(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value) ;

constexpr void __cordl_internal_set_previewTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_webCamTexture(::UnityW<::UnityEngine::WebCamTexture>  value) ;

/// @brief Method .ctor, addr 0x17fc504, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::WebCamDevice  device) ;

/// @brief Method get_frameRate, addr 0x17fd37c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_frameRate() ;

/// @brief Method get_frontFacing, addr 0x17fd340, size 0x2c, virtual true, abstract: false, final true
inline bool get_frontFacing() ;

/// @brief Method get_previewResolution, addr 0x17fd36c, size 0x8, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<int32_t,int32_t> get_previewResolution() ;

/// @brief Method get_running, addr 0x17fd38c, size 0x1c, virtual true, abstract: false, final true
inline bool get_running() ;

/// @brief Method get_uniqueID, addr 0x17fd318, size 0x28, virtual true, abstract: false, final true
inline ::StringW get_uniqueID() ;

/// @brief Convert to "::NatSuite::Devices::ICameraDevice"
constexpr ::NatSuite::Devices::ICameraDevice* i___NatSuite__Devices__ICameraDevice() noexcept;

/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* i___NatSuite__Devices__IMediaDevice() noexcept;

/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept;

/// @brief Method set_frameRate, addr 0x17fd384, size 0x8, virtual true, abstract: false, final true
inline void set_frameRate(int32_t  value) ;

/// @brief Method set_previewResolution, addr 0x17fd374, size 0x8, virtual true, abstract: false, final true
inline void set_previewResolution(::System::ValueTuple_2<int32_t,int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebCameraDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebCameraDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebCameraDevice(WebCameraDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebCameraDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebCameraDevice(WebCameraDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1775};

/// @brief Field device, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::WebCamDevice  ___device;

/// @brief Field <previewResolution>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::ValueTuple_2<int32_t,int32_t>  ____previewResolution_k__BackingField;

/// @brief Field <frameRate>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____frameRate_k__BackingField;

/// @brief Field webCamTexture, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::WebCamTexture>  ___webCamTexture;

/// @brief Field previewTexture, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___previewTexture;

/// @brief Field pixelBuffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  ___pixelBuffer;

/// @brief Field attachment, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment>  ___attachment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::WebCameraDevice, ___device) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::WebCameraDevice, ____previewResolution_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::WebCameraDevice, ____frameRate_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::WebCameraDevice, ___webCamTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::WebCameraDevice, ___previewTexture) == 0x48, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::WebCameraDevice, ___pixelBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::WebCameraDevice, ___attachment) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::WebCameraDevice, 0x60>, "Size mismatch!");

} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::WebCameraDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::WebCameraDevice*, "NatSuite.Devices", "WebCameraDevice");
NEED_NO_BOX(::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*, "NatSuite.Devices", "WebCameraDevice/WebCameraDeviceAttachment");
NEED_NO_BOX(::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0*, "NatSuite.Devices", "WebCameraDevice/<>c__DisplayClass15_0");

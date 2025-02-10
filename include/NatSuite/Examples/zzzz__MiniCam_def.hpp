#pragma once
// IWYU pragma private; include "NatSuite/Examples/MiniCam.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MiniCam)
namespace NatSuite::Devices {
class ICameraDevice;
}
namespace NatSuite::Devices {
class MediaDeviceQuery;
}
namespace NatSuite::Examples {
struct MiniCam__CapturePhoto_d__8;
}
namespace NatSuite::Examples {
struct MiniCam__Start_d__7;
}
namespace NatSuite::Examples {
struct MiniCam__SwitchCamera_d__9;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::UI {
class AspectRatioFitter;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace NatSuite::Examples {
class MiniCam;
}
namespace NatSuite::Examples {
struct MiniCam__CapturePhoto_d__8;
}
namespace NatSuite::Examples {
struct MiniCam__Start_d__7;
}
namespace NatSuite::Examples {
struct MiniCam__SwitchCamera_d__9;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Examples::MiniCam);
MARK_VAL_T(::NatSuite::Examples::MiniCam__CapturePhoto_d__8);
MARK_VAL_T(::NatSuite::Examples::MiniCam__Start_d__7);
MARK_VAL_T(::NatSuite::Examples::MiniCam__SwitchCamera_d__9);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace NatSuite::Examples {
// Is value type: true
// CS Name: NatSuite.Examples.MiniCam/<CapturePhoto>d__8
struct CORDL_TYPE MiniCam__CapturePhoto_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18014d8, size 0x51c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18019f4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MiniCam__CapturePhoto_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::MiniCam>", modifiers: "", def_value: None }, CppParam { name: "_photoTexture_5__2", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr MiniCam__CapturePhoto_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::MiniCam>  __4__this, ::UnityW<::UnityEngine::Texture2D>  _photoTexture_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1789};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::NatSuite::Examples::MiniCam>  __4__this;

/// @brief Field <photoTexture>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  _photoTexture_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::MiniCam__CapturePhoto_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__CapturePhoto_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__CapturePhoto_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__CapturePhoto_d__8, _photoTexture_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__CapturePhoto_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__CapturePhoto_d__8, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::MiniCam__CapturePhoto_d__8, 0x48>, "Size mismatch!");

} // namespace end def NatSuite::Examples
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace NatSuite::Examples {
// Is value type: true
// CS Name: NatSuite.Examples.MiniCam/<Start>d__7
struct CORDL_TYPE MiniCam__Start_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1801a00, size 0x6b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18020b0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MiniCam__Start_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::MiniCam>", modifiers: "", def_value: None }, CppParam { name: "_device_5__2", ty: "::NatSuite::Devices::ICameraDevice*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: None }]
constexpr MiniCam__Start_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::MiniCam>  __4__this, ::NatSuite::Devices::ICameraDevice*  _device_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::NatSuite::Examples::MiniCam>  __4__this;

/// @brief Field <device>5__2, offset: 0x30, size: 0x8, def value: None
 ::NatSuite::Devices::ICameraDevice*  _device_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::MiniCam__Start_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__Start_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__Start_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__Start_d__7, _device_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__Start_d__7, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__Start_d__7, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::MiniCam__Start_d__7, 0x48>, "Size mismatch!");

} // namespace end def NatSuite::Examples
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace NatSuite::Examples {
// Is value type: true
// CS Name: NatSuite.Examples.MiniCam/<SwitchCamera>d__9
struct CORDL_TYPE MiniCam__SwitchCamera_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18020bc, size 0x3f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18024ac, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MiniCam__SwitchCamera_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::MiniCam>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: None }]
constexpr MiniCam__SwitchCamera_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::MiniCam>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1791};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::NatSuite::Examples::MiniCam>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::MiniCam__SwitchCamera_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__SwitchCamera_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__SwitchCamera_d__9, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam__SwitchCamera_d__9, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::MiniCam__SwitchCamera_d__9, 0x38>, "Size mismatch!");

} // namespace end def NatSuite::Examples
// Dependencies UnityEngine.MonoBehaviour
namespace NatSuite::Examples {
// Is value type: false
// CS Name: NatSuite.Examples.MiniCam
class CORDL_TYPE MiniCam : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CapturePhoto_d__8 = ::NatSuite::Examples::MiniCam__CapturePhoto_d__8;

using _Start_d__7 = ::NatSuite::Examples::MiniCam__Start_d__7;

using _SwitchCamera_d__9 = ::NatSuite::Examples::MiniCam__SwitchCamera_d__9;

/// @brief Field deviceQuery, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_deviceQuery, put=__cordl_internal_set_deviceQuery)) ::NatSuite::Devices::MediaDeviceQuery*  deviceQuery;

/// @brief Field flashIcon, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_flashIcon, put=__cordl_internal_set_flashIcon)) ::UnityW<::UnityEngine::UI::Image>  flashIcon;

/// @brief Field photoAspectFitter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_photoAspectFitter, put=__cordl_internal_set_photoAspectFitter)) ::UnityW<::UnityEngine::UI::AspectRatioFitter>  photoAspectFitter;

/// @brief Field photoPanel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_photoPanel, put=__cordl_internal_set_photoPanel)) ::UnityW<::UnityEngine::UI::RawImage>  photoPanel;

/// @brief Field previewAspectFitter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewAspectFitter, put=__cordl_internal_set_previewAspectFitter)) ::UnityW<::UnityEngine::UI::AspectRatioFitter>  previewAspectFitter;

/// @brief Field previewPanel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewPanel, put=__cordl_internal_set_previewPanel)) ::UnityW<::UnityEngine::UI::RawImage>  previewPanel;

/// @brief Field switchIcon, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_switchIcon, put=__cordl_internal_set_switchIcon)) ::UnityW<::UnityEngine::UI::Image>  switchIcon;

/// @brief Method CapturePhoto, addr 0x1801080, size 0x90, virtual false, abstract: false, final false
inline void CapturePhoto() ;

/// @brief Method FocusCamera, addr 0x18011a0, size 0x224, virtual false, abstract: false, final false
inline void FocusCamera(::UnityEngine::EventSystems::BaseEventData*  e) ;

static inline ::NatSuite::Examples::MiniCam* New_ctor() ;

/// @brief Method Start, addr 0x1800ff0, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchCamera, addr 0x1801110, size 0x90, virtual false, abstract: false, final false
inline void SwitchCamera() ;

/// @brief Method ToggleFlashMode, addr 0x18013c4, size 0x10c, virtual false, abstract: false, final false
inline void ToggleFlashMode() ;

constexpr ::NatSuite::Devices::MediaDeviceQuery* const& __cordl_internal_get_deviceQuery() const;

constexpr ::NatSuite::Devices::MediaDeviceQuery*& __cordl_internal_get_deviceQuery() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_flashIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_flashIcon() ;

constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter> const& __cordl_internal_get_photoAspectFitter() const;

constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter>& __cordl_internal_get_photoAspectFitter() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_photoPanel() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_photoPanel() ;

constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter> const& __cordl_internal_get_previewAspectFitter() const;

constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter>& __cordl_internal_get_previewAspectFitter() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_previewPanel() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_previewPanel() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_switchIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_switchIcon() ;

constexpr void __cordl_internal_set_deviceQuery(::NatSuite::Devices::MediaDeviceQuery*  value) ;

constexpr void __cordl_internal_set_flashIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_photoAspectFitter(::UnityW<::UnityEngine::UI::AspectRatioFitter>  value) ;

constexpr void __cordl_internal_set_photoPanel(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set_previewAspectFitter(::UnityW<::UnityEngine::UI::AspectRatioFitter>  value) ;

constexpr void __cordl_internal_set_previewPanel(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set_switchIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x18014d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MiniCam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MiniCam", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MiniCam(MiniCam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MiniCam", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MiniCam(MiniCam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1792};

/// @brief Field previewPanel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ___previewPanel;

/// @brief Field previewAspectFitter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::AspectRatioFitter>  ___previewAspectFitter;

/// @brief Field photoPanel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ___photoPanel;

/// @brief Field photoAspectFitter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::AspectRatioFitter>  ___photoAspectFitter;

/// @brief Field flashIcon, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___flashIcon;

/// @brief Field switchIcon, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___switchIcon;

/// @brief Field deviceQuery, offset: 0x50, size: 0x8, def value: None
 ::NatSuite::Devices::MediaDeviceQuery*  ___deviceQuery;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Examples::MiniCam, ___previewPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam, ___previewAspectFitter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam, ___photoPanel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam, ___photoAspectFitter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam, ___flashIcon) == 0x40, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam, ___switchIcon) == 0x48, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Examples::MiniCam, ___deviceQuery) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Examples::MiniCam, 0x58>, "Size mismatch!");

} // namespace end def NatSuite::Examples
NEED_NO_BOX(::NatSuite::Examples::MiniCam);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::MiniCam*, "NatSuite.Examples", "MiniCam");
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::MiniCam__CapturePhoto_d__8, "NatSuite.Examples", "MiniCam/<CapturePhoto>d__8");
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::MiniCam__Start_d__7, "NatSuite.Examples", "MiniCam/<Start>d__7");
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Examples::MiniCam__SwitchCamera_d__9, "NatSuite.Examples", "MiniCam/<SwitchCamera>d__9");

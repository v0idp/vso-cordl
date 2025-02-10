#pragma once
// IWYU pragma private; include "NatSuite/Devices/MediaDeviceQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__UserAuthorization_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MediaDeviceQuery)
namespace NatSuite::Devices {
class AudioDevice;
}
namespace NatSuite::Devices {
class CameraDevice;
}
namespace NatSuite::Devices {
class Criteria_MediaDeviceQuery___c;
}
namespace NatSuite::Devices {
class IMediaDevice;
}
namespace NatSuite::Devices {
class MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7;
}
namespace NatSuite::Devices {
class MediaDeviceQuery_Criteria;
}
namespace NatSuite::Devices {
class MediaDeviceQuery_Criterion;
}
namespace NatSuite::Devices {
class MediaDeviceQuery_MediaDeviceQueryPermissionsHelper;
}
namespace NatSuite::Devices {
class MediaDeviceQuery___c;
}
namespace NatSuite::Devices {
template<typename T>
class MediaDeviceQuery___c__DisplayClass2_0_1;
}
namespace NatSuite::Devices {
class MediaDeviceQuery___c__DisplayClass9_0;
}
namespace NatSuite::Devices {
class MediaDeviceQuery___c__DisplayClass9_1;
}
namespace NatSuite::Devices {
class WebCameraDevice;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
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
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Android {
class PermissionCallbacks;
}
namespace UnityEngine {
struct WebCamDevice;
}
// Forward declare root types
namespace NatSuite::Devices {
class Criteria_MediaDeviceQuery___c;
}
namespace NatSuite::Devices {
class MediaDeviceQuery;
}
namespace NatSuite::Devices {
class MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7;
}
namespace NatSuite::Devices {
class MediaDeviceQuery_Criteria;
}
namespace NatSuite::Devices {
class MediaDeviceQuery_Criterion;
}
namespace NatSuite::Devices {
class MediaDeviceQuery_MediaDeviceQueryPermissionsHelper;
}
namespace NatSuite::Devices {
class MediaDeviceQuery___c;
}
namespace NatSuite::Devices {
template<typename T>
class MediaDeviceQuery___c__DisplayClass2_0_1;
}
namespace NatSuite::Devices {
class MediaDeviceQuery___c__DisplayClass9_0;
}
namespace NatSuite::Devices {
class MediaDeviceQuery___c__DisplayClass9_1;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::Criteria_MediaDeviceQuery___c);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery_Criteria);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery_Criterion);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery___c);
MARK_GEN_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass2_0_1);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_0);
MARK_REF_PTR_T(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_1);
// Dependencies System.MulticastDelegate
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/Criterion
class CORDL_TYPE MediaDeviceQuery_Criterion : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x17fb55c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::NatSuite::Devices::IMediaDevice*  device, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x17fb57c, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x17fb548, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::NatSuite::Devices::IMediaDevice*  device) ;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x17fb448, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery_Criterion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery_Criterion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery_Criterion(MediaDeviceQuery_Criterion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery_Criterion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery_Criterion(MediaDeviceQuery_Criterion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1760};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQuery_Criterion, 0x80>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/Criteria/<>c
class CORDL_TYPE Criteria_MediaDeviceQuery___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::NatSuite::Devices::Criteria_MediaDeviceQuery___c*  __9;

static inline ::NatSuite::Devices::Criteria_MediaDeviceQuery___c* New_ctor() ;

/// @brief Method <.cctor>b__7_0, addr 0x17fb878, size 0x78, virtual false, abstract: false, final false
inline bool __cctor_b__7_0(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method <.cctor>b__7_1, addr 0x17fb8f0, size 0x78, virtual false, abstract: false, final false
inline bool __cctor_b__7_1(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method <.cctor>b__7_2, addr 0x17fb968, size 0x54, virtual false, abstract: false, final false
inline bool __cctor_b__7_2(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method <.cctor>b__7_3, addr 0x17fb9bc, size 0xbc, virtual false, abstract: false, final false
inline bool __cctor_b__7_3(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method <.cctor>b__7_4, addr 0x17fba78, size 0xb4, virtual false, abstract: false, final false
inline bool __cctor_b__7_4(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method <.cctor>b__7_5, addr 0x17fbb2c, size 0x98, virtual false, abstract: false, final false
inline bool __cctor_b__7_5(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method <.cctor>b__7_6, addr 0x17fbbc4, size 0x98, virtual false, abstract: false, final false
inline bool __cctor_b__7_6(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method .ctor, addr 0x17fb870, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::NatSuite::Devices::Criteria_MediaDeviceQuery___c* getStaticF___9() ;

static inline void setStaticF___9(::NatSuite::Devices::Criteria_MediaDeviceQuery___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Criteria_MediaDeviceQuery___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Criteria_MediaDeviceQuery___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Criteria_MediaDeviceQuery___c(Criteria_MediaDeviceQuery___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Criteria_MediaDeviceQuery___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Criteria_MediaDeviceQuery___c(Criteria_MediaDeviceQuery___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Criteria_MediaDeviceQuery___c, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/Criteria
class CORDL_TYPE MediaDeviceQuery_Criteria : public ::System::Object {
public:
// Declarations
using __c = ::NatSuite::Devices::Criteria_MediaDeviceQuery___c;

/// @brief Field AudioDevice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AudioDevice, put=setStaticF_AudioDevice)) ::NatSuite::Devices::MediaDeviceQuery_Criterion*  AudioDevice;

/// @brief Field CameraDevice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraDevice, put=setStaticF_CameraDevice)) ::NatSuite::Devices::MediaDeviceQuery_Criterion*  CameraDevice;

/// @brief Field EchoCancellation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EchoCancellation, put=setStaticF_EchoCancellation)) ::NatSuite::Devices::MediaDeviceQuery_Criterion*  EchoCancellation;

/// @brief Field FrontFacing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FrontFacing, put=setStaticF_FrontFacing)) ::NatSuite::Devices::MediaDeviceQuery_Criterion*  FrontFacing;

/// @brief Field GenericCameraDevice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GenericCameraDevice, put=setStaticF_GenericCameraDevice)) ::NatSuite::Devices::MediaDeviceQuery_Criterion*  GenericCameraDevice;

/// @brief Field RearFacing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RearFacing, put=setStaticF_RearFacing)) ::NatSuite::Devices::MediaDeviceQuery_Criterion*  RearFacing;

/// @brief Field Torch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Torch, put=setStaticF_Torch)) ::NatSuite::Devices::MediaDeviceQuery_Criterion*  Torch;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* getStaticF_AudioDevice() ;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* getStaticF_CameraDevice() ;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* getStaticF_EchoCancellation() ;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* getStaticF_FrontFacing() ;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* getStaticF_GenericCameraDevice() ;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* getStaticF_RearFacing() ;

static inline ::NatSuite::Devices::MediaDeviceQuery_Criterion* getStaticF_Torch() ;

static inline void setStaticF_AudioDevice(::NatSuite::Devices::MediaDeviceQuery_Criterion*  value) ;

static inline void setStaticF_CameraDevice(::NatSuite::Devices::MediaDeviceQuery_Criterion*  value) ;

static inline void setStaticF_EchoCancellation(::NatSuite::Devices::MediaDeviceQuery_Criterion*  value) ;

static inline void setStaticF_FrontFacing(::NatSuite::Devices::MediaDeviceQuery_Criterion*  value) ;

static inline void setStaticF_GenericCameraDevice(::NatSuite::Devices::MediaDeviceQuery_Criterion*  value) ;

static inline void setStaticF_RearFacing(::NatSuite::Devices::MediaDeviceQuery_Criterion*  value) ;

static inline void setStaticF_Torch(::NatSuite::Devices::MediaDeviceQuery_Criterion*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery_Criteria() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery_Criteria", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery_Criteria(MediaDeviceQuery_Criteria && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery_Criteria", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery_Criteria(MediaDeviceQuery_Criteria const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQuery_Criteria, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.UserAuthorization
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/MediaDeviceQueryPermissionsHelper/<RequestiOS>d__7
class CORDL_TYPE MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <permission>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__permission_5__2, put=__cordl_internal_set__permission_5__2)) ::UnityEngine::UserAuthorization  _permission_5__2;

/// @brief Field camera, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_camera, put=__cordl_internal_set_camera)) bool  camera;

/// @brief Field completionHandler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionHandler, put=__cordl_internal_set_completionHandler)) ::System::Action_1<bool>*  completionHandler;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17fc2c0, size 0x130, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17fc3f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17fc3f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17fc430, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17fc2bc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::UserAuthorization const& __cordl_internal_get__permission_5__2() const;

constexpr ::UnityEngine::UserAuthorization& __cordl_internal_get__permission_5__2() ;

constexpr bool const& __cordl_internal_get_camera() const;

constexpr bool& __cordl_internal_get_camera() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_completionHandler() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_completionHandler() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__permission_5__2(::UnityEngine::UserAuthorization  value) ;

constexpr void __cordl_internal_set_camera(bool  value) ;

constexpr void __cordl_internal_set_completionHandler(::System::Action_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x17fc234, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7(MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7(MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1763};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field camera, offset: 0x20, size: 0x1, def value: None
 bool  ___camera;

/// @brief Field completionHandler, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___completionHandler;

/// @brief Field <permission>5__2, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::UserAuthorization  ____permission_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7, ___camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7, ___completionHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7, ____permission_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7, 0x38>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies UnityEngine.MonoBehaviour
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/MediaDeviceQueryPermissionsHelper
class CORDL_TYPE MediaDeviceQuery_MediaDeviceQueryPermissionsHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RequestiOS_d__7 = ::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7;

/// @brief Field _androidCompletionHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__androidCompletionHandler, put=__cordl_internal_set__androidCompletionHandler)) ::System::Action_1<bool>*  _androidCompletionHandler;

/// @brief Field _androidPermissionCallbacks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__androidPermissionCallbacks, put=__cordl_internal_set__androidPermissionCallbacks)) ::UnityEngine::Android::PermissionCallbacks*  _androidPermissionCallbacks;

/// @brief Method AndroidPermissionDenied, addr 0x17fc0fc, size 0x138, virtual false, abstract: false, final false
inline void AndroidPermissionDenied(::StringW  permission) ;

/// @brief Method AndroidPermissionGranted, addr 0x17fbfc4, size 0x138, virtual false, abstract: false, final false
inline void AndroidPermissionGranted(::StringW  permission) ;

/// @brief Method Awake, addr 0x17fbc5c, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper* New_ctor() ;

/// @brief Method Request, addr 0x17fbcc8, size 0xe8, virtual false, abstract: false, final false
inline void Request(bool  camera, ::System::Action_1<bool>*  completionHandler) ;

/// @brief Method RequestAndroid, addr 0x17fbdb0, size 0x1a0, virtual false, abstract: false, final false
inline void RequestAndroid(bool  camera, ::System::Action_1<bool>*  completionHandler) ;

/// @brief Method RequestiOS, addr 0x17fbf50, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RequestiOS(bool  camera, ::System::Action_1<bool>*  completionHandler) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get__androidCompletionHandler() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get__androidCompletionHandler() ;

constexpr ::UnityEngine::Android::PermissionCallbacks* const& __cordl_internal_get__androidPermissionCallbacks() const;

constexpr ::UnityEngine::Android::PermissionCallbacks*& __cordl_internal_get__androidPermissionCallbacks() ;

constexpr void __cordl_internal_set__androidCompletionHandler(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__androidPermissionCallbacks(::UnityEngine::Android::PermissionCallbacks*  value) ;

/// @brief Method .ctor, addr 0x17fc25c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery_MediaDeviceQueryPermissionsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery_MediaDeviceQueryPermissionsHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery_MediaDeviceQueryPermissionsHelper(MediaDeviceQuery_MediaDeviceQueryPermissionsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery_MediaDeviceQueryPermissionsHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery_MediaDeviceQueryPermissionsHelper(MediaDeviceQuery_MediaDeviceQueryPermissionsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1764};

/// @brief Field _androidCompletionHandler, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<bool>*  ____androidCompletionHandler;

/// @brief Field _androidPermissionCallbacks, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Android::PermissionCallbacks*  ____androidPermissionCallbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper, ____androidCompletionHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper, ____androidPermissionCallbacks) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper, 0x30>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/<>c
class CORDL_TYPE MediaDeviceQuery___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::NatSuite::Devices::MediaDeviceQuery___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::UnityEngine::WebCamDevice,::NatSuite::Devices::WebCameraDevice*>*  __9__14_0;

static inline ::NatSuite::Devices::MediaDeviceQuery___c* New_ctor() ;

/// @brief Method <WebCamDevices>b__14_0, addr 0x17fc49c, size 0x68, virtual false, abstract: false, final false
inline ::NatSuite::Devices::WebCameraDevice* _WebCamDevices_b__14_0(::UnityEngine::WebCamDevice  device) ;

/// @brief Method .ctor, addr 0x17fc494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::NatSuite::Devices::MediaDeviceQuery___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::WebCamDevice,::NatSuite::Devices::WebCameraDevice*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::NatSuite::Devices::MediaDeviceQuery___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::UnityEngine::WebCamDevice,::NatSuite::Devices::WebCameraDevice*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery___c(MediaDeviceQuery___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery___c(MediaDeviceQuery___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1765};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQuery___c, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// cpp template
template<typename T>
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/<>c__DisplayClass2_0`1<T>
class CORDL_TYPE MediaDeviceQuery___c__DisplayClass2_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field permissionTask, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_permissionTask, put=__cordl_internal_set_permissionTask)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  permissionTask;

/// @brief Field requester, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requester, put=__cordl_internal_set_requester)) ::UnityW<::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper>  requester;

static inline ::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass2_0_1<T>* New_ctor() ;

/// @brief Method <RequestPermissions>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RequestPermissions_b__0(bool  granted) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_permissionTask() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_permissionTask() ;

constexpr ::UnityW<::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper> const& __cordl_internal_get_requester() const;

constexpr ::UnityW<::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper>& __cordl_internal_get_requester() ;

constexpr void __cordl_internal_set_permissionTask(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set_requester(::UnityW<::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery___c__DisplayClass2_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery___c__DisplayClass2_0_1(MediaDeviceQuery___c__DisplayClass2_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery___c__DisplayClass2_0_1(MediaDeviceQuery___c__DisplayClass2_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1766};

/// @brief Field permissionTask, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___permissionTask;

/// @brief Field requester, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper>  ___requester;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/<>c__DisplayClass9_0
class CORDL_TYPE MediaDeviceQuery___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field criteria, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_criteria, put=__cordl_internal_set_criteria)) ::ArrayW<::NatSuite::Devices::MediaDeviceQuery_Criterion*,::Array<::NatSuite::Devices::MediaDeviceQuery_Criterion*>*>  criteria;

static inline ::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_0* New_ctor() ;

constexpr ::ArrayW<::NatSuite::Devices::MediaDeviceQuery_Criterion*,::Array<::NatSuite::Devices::MediaDeviceQuery_Criterion*>*> const& __cordl_internal_get_criteria() const;

constexpr ::ArrayW<::NatSuite::Devices::MediaDeviceQuery_Criterion*,::Array<::NatSuite::Devices::MediaDeviceQuery_Criterion*>*>& __cordl_internal_get_criteria() ;

constexpr void __cordl_internal_set_criteria(::ArrayW<::NatSuite::Devices::MediaDeviceQuery_Criterion*,::Array<::NatSuite::Devices::MediaDeviceQuery_Criterion*>*>  value) ;

/// @brief Method <.ctor>b__0, addr 0x17fc58c, size 0xd4, virtual false, abstract: false, final false
inline bool __ctor_b__0(::NatSuite::Devices::IMediaDevice*  device) ;

/// @brief Method .ctor, addr 0x17fadac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery___c__DisplayClass9_0(MediaDeviceQuery___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery___c__DisplayClass9_0(MediaDeviceQuery___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1767};

/// @brief Field criteria, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::NatSuite::Devices::MediaDeviceQuery_Criterion*,::Array<::NatSuite::Devices::MediaDeviceQuery_Criterion*>*>  ___criteria;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_0, ___criteria) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery/<>c__DisplayClass9_1
class CORDL_TYPE MediaDeviceQuery___c__DisplayClass9_1 : public ::System::Object {
public:
// Declarations
/// @brief Field device, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::NatSuite::Devices::IMediaDevice*  device;

static inline ::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_1* New_ctor() ;

constexpr ::NatSuite::Devices::IMediaDevice* const& __cordl_internal_get_device() const;

constexpr ::NatSuite::Devices::IMediaDevice*& __cordl_internal_get_device() ;

constexpr void __cordl_internal_set_device(::NatSuite::Devices::IMediaDevice*  value) ;

/// @brief Method <.ctor>b__1, addr 0x17fc668, size 0x28, virtual false, abstract: false, final false
inline bool __ctor_b__1(::NatSuite::Devices::MediaDeviceQuery_Criterion*  criterion) ;

/// @brief Method .ctor, addr 0x17fc660, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery___c__DisplayClass9_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c__DisplayClass9_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery___c__DisplayClass9_1(MediaDeviceQuery___c__DisplayClass9_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery___c__DisplayClass9_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery___c__DisplayClass9_1(MediaDeviceQuery___c__DisplayClass9_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1768};

/// @brief Field device, offset: 0x10, size: 0x8, def value: None
 ::NatSuite::Devices::IMediaDevice*  ___device;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_1, ___device) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_1, 0x18>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MediaDeviceQuery
class CORDL_TYPE MediaDeviceQuery : public ::System::Object {
public:
// Declarations
using Criteria = ::NatSuite::Devices::MediaDeviceQuery_Criteria;

using Criterion = ::NatSuite::Devices::MediaDeviceQuery_Criterion;

using MediaDeviceQueryPermissionsHelper = ::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper;

using __c = ::NatSuite::Devices::MediaDeviceQuery___c;

template<typename T>
using __c__DisplayClass2_0_1 = ::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass2_0_1<T>;

using __c__DisplayClass9_0 = ::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_0;

using __c__DisplayClass9_1 = ::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_1;

 __declspec(property(get=get_count)) int32_t  count;

 __declspec(property(get=get_currentDevice)) ::NatSuite::Devices::IMediaDevice*  currentDevice;

/// @brief Field devices, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_devices, put=__cordl_internal_set_devices)) ::ArrayW<::NatSuite::Devices::IMediaDevice*,::Array<::NatSuite::Devices::IMediaDevice*>*>  devices;

/// @brief Field index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Method Advance, addr 0x17fb244, size 0x30, virtual false, abstract: false, final false
inline void Advance() ;

/// @brief Method AudioDevices, addr 0x17fadb4, size 0x1c8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::AudioDevice*>* AudioDevices() ;

/// @brief Method CameraDevices, addr 0x17faf7c, size 0x1c8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::CameraDevice*>* CameraDevices() ;

static inline ::NatSuite::Devices::MediaDeviceQuery* New_ctor(::ArrayW<::NatSuite::Devices::MediaDeviceQuery_Criterion*,::Array<::NatSuite::Devices::MediaDeviceQuery_Criterion*>*>  criteria) ;

/// @brief Method RequestPermissions, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<bool>* RequestPermissions() ;

/// @brief Method WebCamDevices, addr 0x17fb144, size 0x100, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::WebCameraDevice*>* WebCamDevices() ;

constexpr ::ArrayW<::NatSuite::Devices::IMediaDevice*,::Array<::NatSuite::Devices::IMediaDevice*>*> const& __cordl_internal_get_devices() const;

constexpr ::ArrayW<::NatSuite::Devices::IMediaDevice*,::Array<::NatSuite::Devices::IMediaDevice*>*>& __cordl_internal_get_devices() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_devices(::ArrayW<::NatSuite::Devices::IMediaDevice*,::Array<::NatSuite::Devices::IMediaDevice*>*>  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x17faba8, size 0x204, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::NatSuite::Devices::MediaDeviceQuery_Criterion*,::Array<::NatSuite::Devices::MediaDeviceQuery_Criterion*>*>  criteria) ;

/// @brief Method get_count, addr 0x17fab8c, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_count() ;

/// @brief Method get_currentDevice, addr 0x17fab48, size 0x44, virtual false, abstract: false, final false
inline ::NatSuite::Devices::IMediaDevice* get_currentDevice() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MediaDeviceQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaDeviceQuery(MediaDeviceQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaDeviceQuery", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaDeviceQuery(MediaDeviceQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1769};

/// @brief Field devices, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::NatSuite::Devices::IMediaDevice*,::Array<::NatSuite::Devices::IMediaDevice*>*>  ___devices;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MediaDeviceQuery, ___devices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MediaDeviceQuery, ___index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MediaDeviceQuery, 0x20>, "Size mismatch!");

} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::Criteria_MediaDeviceQuery___c);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Criteria_MediaDeviceQuery___c*, "NatSuite.Devices", "MediaDeviceQuery/Criteria/<>c");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery*, "NatSuite.Devices", "MediaDeviceQuery");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQueryPermissionsHelper_MediaDeviceQuery__RequestiOS_d__7*, "NatSuite.Devices", "MediaDeviceQuery/MediaDeviceQueryPermissionsHelper/<RequestiOS>d__7");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery_Criteria);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery_Criteria*, "NatSuite.Devices", "MediaDeviceQuery/Criteria");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery_Criterion);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery_Criterion*, "NatSuite.Devices", "MediaDeviceQuery/Criterion");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery_MediaDeviceQueryPermissionsHelper*, "NatSuite.Devices", "MediaDeviceQuery/MediaDeviceQueryPermissionsHelper");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery___c);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery___c*, "NatSuite.Devices", "MediaDeviceQuery/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass2_0_1, "NatSuite.Devices", "MediaDeviceQuery/<>c__DisplayClass2_0`1");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_0*, "NatSuite.Devices", "MediaDeviceQuery/<>c__DisplayClass9_0");
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_1);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery___c__DisplayClass9_1*, "NatSuite.Devices", "MediaDeviceQuery/<>c__DisplayClass9_1");

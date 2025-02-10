#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirebaseHandler)
namespace Firebase::Platform {
class FirebaseHandler_ApplicationFocusChangedEventArgs;
}
namespace Firebase::Platform {
class FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0;
}
namespace Firebase::Platform {
class FirebaseMonoBehaviour;
}
namespace Firebase::Platform {
class IFirebaseAppUtils;
}
namespace Firebase {
class Dispatcher;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
class EventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Firebase::Platform {
class FirebaseHandler;
}
namespace Firebase::Platform {
class FirebaseHandler_ApplicationFocusChangedEventArgs;
}
namespace Firebase::Platform {
class FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::FirebaseHandler);
MARK_REF_PTR_T(::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs);
MARK_REF_PTR_T(::Firebase::Platform::FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0);
// Dependencies System.EventArgs
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
class CORDL_TYPE FirebaseHandler_ApplicationFocusChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(put=set_HasFocus)) bool  HasFocus;

/// @brief Field <HasFocus>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasFocus_k__BackingField, put=__cordl_internal_set__HasFocus_k__BackingField)) bool  _HasFocus_k__BackingField;

static inline ::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs* New_ctor() ;

constexpr bool const& __cordl_internal_get__HasFocus_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasFocus_k__BackingField() ;

constexpr void __cordl_internal_set__HasFocus_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x191fcc8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_HasFocus, addr 0x191ff68, size 0xc, virtual false, abstract: false, final false
inline void set_HasFocus(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHandler_ApplicationFocusChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHandler_ApplicationFocusChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHandler_ApplicationFocusChangedEventArgs(FirebaseHandler_ApplicationFocusChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHandler_ApplicationFocusChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHandler_ApplicationFocusChangedEventArgs(FirebaseHandler_ApplicationFocusChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12178};

/// @brief Field <HasFocus>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____HasFocus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs, ____HasFocus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Platform
// Dependencies System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
class CORDL_TYPE FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field appUtils, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_appUtils, put=__cordl_internal_set_appUtils)) ::Firebase::Platform::IFirebaseAppUtils*  appUtils;

static inline ::Firebase::Platform::FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0* New_ctor() ;

constexpr ::Firebase::Platform::IFirebaseAppUtils* const& __cordl_internal_get_appUtils() const;

constexpr ::Firebase::Platform::IFirebaseAppUtils*& __cordl_internal_get_appUtils() ;

constexpr void __cordl_internal_set_appUtils(::Firebase::Platform::IFirebaseAppUtils*  value) ;

/// @brief Method <>m__0, addr 0x191ff74, size 0x288, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x191f7e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0(FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0(FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12179};

/// @brief Field appUtils, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Platform::IFirebaseAppUtils*  ___appUtils;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Platform::FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0, ___appUtils) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Platform
// Dependencies System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseHandler
class CORDL_TYPE FirebaseHandler : public ::System::Object {
public:
// Declarations
using ApplicationFocusChangedEventArgs = ::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs;

using _CreatePartialOnMainThread_c__AnonStorey0 = ::Firebase::Platform::FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0;

/// @brief Field ApplicationFocusChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApplicationFocusChanged, put=__cordl_internal_set_ApplicationFocusChanged)) ::System::EventHandler_1<::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs*>*  ApplicationFocusChanged;

 __declspec(property(get=get_IsPlayMode, put=set_IsPlayMode)) bool  IsPlayMode;

/// @brief Field Updated, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Updated, put=__cordl_internal_set_Updated)) ::System::EventHandler_1<::System::EventArgs*>*  Updated;

/// @brief Field UpdatedEventWrapper, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpdatedEventWrapper, put=__cordl_internal_set_UpdatedEventWrapper)) ::System::Action*  UpdatedEventWrapper;

/// @brief Field <AppUtils>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AppUtils_k__BackingField, put=setStaticF__AppUtils_k__BackingField)) ::Firebase::Platform::IFirebaseAppUtils*  _AppUtils_k__BackingField;

/// @brief Field <IsPlayMode>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlayMode_k__BackingField, put=__cordl_internal_set__IsPlayMode_k__BackingField)) bool  _IsPlayMode_k__BackingField;

/// @brief Field <ThreadDispatcher>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ThreadDispatcher_k__BackingField, put=setStaticF__ThreadDispatcher_k__BackingField)) ::Firebase::Dispatcher*  _ThreadDispatcher_k__BackingField;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_1<bool>*  __f__am$cache0;

/// @brief Field firebaseHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_firebaseHandler, put=setStaticF_firebaseHandler)) ::Firebase::Platform::FirebaseHandler*  firebaseHandler;

/// @brief Field firebaseMonoBehaviour, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_firebaseMonoBehaviour, put=setStaticF_firebaseMonoBehaviour)) ::UnityW<::Firebase::Platform::FirebaseMonoBehaviour>  firebaseMonoBehaviour;

/// @brief Field tickCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_tickCount, put=setStaticF_tickCount)) int32_t  tickCount;

/// @brief Method Create, addr 0x191f7ec, size 0x58, virtual false, abstract: false, final false
static inline void Create(::Firebase::Platform::IFirebaseAppUtils*  appUtils) ;

/// @brief Method CreatePartialOnMainThread, addr 0x191f6d0, size 0x114, virtual false, abstract: false, final false
static inline void CreatePartialOnMainThread(::Firebase::Platform::IFirebaseAppUtils*  appUtils) ;

static inline ::Firebase::Platform::FirebaseHandler* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x191fc3c, size 0x8c, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnMonoBehaviourDestroyed, addr 0x191fd20, size 0xb4, virtual false, abstract: false, final false
static inline void OnMonoBehaviourDestroyed(::Firebase::Platform::FirebaseMonoBehaviour*  behaviour) ;

/// @brief Method RunOnMainThread, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
static inline TResult RunOnMainThread(::System::Func_1<TResult>*  f) ;

/// @brief Method RunOnMainThreadAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
static inline ::System::Threading::Tasks::Task_1<TResult>* RunOnMainThreadAsync(::System::Func_1<TResult>*  f) ;

/// @brief Method StartMonoBehaviour, addr 0x191ee34, size 0x164, virtual false, abstract: false, final false
inline void StartMonoBehaviour() ;

/// @brief Method StopMonoBehaviour, addr 0x191ef98, size 0x150, virtual false, abstract: false, final false
inline void StopMonoBehaviour() ;

/// @brief Method Update, addr 0x191e75c, size 0x1d0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <StopMonoBehaviour>m__0, addr 0x191fdd4, size 0x110, virtual false, abstract: false, final false
static inline bool _StopMonoBehaviour_m__0() ;

/// @brief Method <Update>m__1, addr 0x191ff3c, size 0x2c, virtual false, abstract: false, final false
inline void _Update_m__1() ;

constexpr ::System::EventHandler_1<::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs*>* const& __cordl_internal_get_ApplicationFocusChanged() const;

constexpr ::System::EventHandler_1<::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs*>*& __cordl_internal_get_ApplicationFocusChanged() ;

constexpr ::System::EventHandler_1<::System::EventArgs*>* const& __cordl_internal_get_Updated() const;

constexpr ::System::EventHandler_1<::System::EventArgs*>*& __cordl_internal_get_Updated() ;

constexpr ::System::Action* const& __cordl_internal_get_UpdatedEventWrapper() const;

constexpr ::System::Action*& __cordl_internal_get_UpdatedEventWrapper() ;

constexpr bool const& __cordl_internal_get__IsPlayMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPlayMode_k__BackingField() ;

constexpr void __cordl_internal_set_ApplicationFocusChanged(::System::EventHandler_1<::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_Updated(::System::EventHandler_1<::System::EventArgs*>*  value) ;

constexpr void __cordl_internal_set_UpdatedEventWrapper(::System::Action*  value) ;

constexpr void __cordl_internal_set__IsPlayMode_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x191f37c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Platform::IFirebaseAppUtils* getStaticF__AppUtils_k__BackingField() ;

static inline ::Firebase::Dispatcher* getStaticF__ThreadDispatcher_k__BackingField() ;

static inline ::System::Func_1<bool>* getStaticF___f__am$cache0() ;

static inline ::Firebase::Platform::FirebaseHandler* getStaticF_firebaseHandler() ;

static inline ::UnityW<::Firebase::Platform::FirebaseMonoBehaviour> getStaticF_firebaseMonoBehaviour() ;

static inline int32_t getStaticF_tickCount() ;

/// @brief Method get_AppUtils, addr 0x191f418, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Platform::IFirebaseAppUtils* get_AppUtils() ;

/// @brief Method get_DefaultInstance, addr 0x191f678, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Platform::FirebaseHandler* get_DefaultInstance() ;

/// @brief Method get_IsPlayMode, addr 0x191f5d8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlayMode() ;

/// @brief Method get_ThreadDispatcher, addr 0x191f524, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Dispatcher* get_ThreadDispatcher() ;

/// @brief Method get_TickCount, addr 0x191f4cc, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_TickCount() ;

static inline void setStaticF__AppUtils_k__BackingField(::Firebase::Platform::IFirebaseAppUtils*  value) ;

static inline void setStaticF__ThreadDispatcher_k__BackingField(::Firebase::Dispatcher*  value) ;

static inline void setStaticF___f__am$cache0(::System::Func_1<bool>*  value) ;

static inline void setStaticF_firebaseHandler(::Firebase::Platform::FirebaseHandler*  value) ;

static inline void setStaticF_firebaseMonoBehaviour(::UnityW<::Firebase::Platform::FirebaseMonoBehaviour>  value) ;

static inline void setStaticF_tickCount(int32_t  value) ;

/// @brief Method set_AppUtils, addr 0x191f470, size 0x5c, virtual false, abstract: false, final false
static inline void set_AppUtils(::Firebase::Platform::IFirebaseAppUtils*  value) ;

/// @brief Method set_IsPlayMode, addr 0x191f5e0, size 0xc, virtual false, abstract: false, final false
inline void set_IsPlayMode(bool  value) ;

/// @brief Method set_ThreadDispatcher, addr 0x191f57c, size 0x5c, virtual false, abstract: false, final false
static inline void set_ThreadDispatcher(::Firebase::Dispatcher*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHandler(FirebaseHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHandler(FirebaseHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12180};

/// @brief Field <IsPlayMode>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsPlayMode_k__BackingField;

/// @brief Field Updated, offset: 0x18, size: 0x8, def value: None
 ::System::EventHandler_1<::System::EventArgs*>*  ___Updated;

/// @brief Field UpdatedEventWrapper, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___UpdatedEventWrapper;

/// @brief Field ApplicationFocusChanged, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler_1<::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs*>*  ___ApplicationFocusChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Platform::FirebaseHandler, ____IsPlayMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Platform::FirebaseHandler, ___Updated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Platform::FirebaseHandler, ___UpdatedEventWrapper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Platform::FirebaseHandler, ___ApplicationFocusChanged) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseHandler, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::FirebaseHandler);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseHandler*, "Firebase.Platform", "FirebaseHandler");
NEED_NO_BOX(::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseHandler_ApplicationFocusChangedEventArgs*, "Firebase.Platform", "FirebaseHandler/ApplicationFocusChangedEventArgs");
NEED_NO_BOX(::Firebase::Platform::FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseHandler__CreatePartialOnMainThread_c__AnonStorey0*, "Firebase.Platform", "FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0");

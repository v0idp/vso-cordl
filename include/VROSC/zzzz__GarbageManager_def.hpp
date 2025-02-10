#pragma once
// IWYU pragma private; include "VROSC/GarbageManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GarbageManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
struct GarbageManager__DisableCollectionForSessionHandling_d__15;
}
namespace VROSC {
struct GarbageManager__DisableCollection_d__16;
}
// Forward declare root types
namespace VROSC {
class GarbageManager;
}
namespace VROSC {
struct GarbageManager__DisableCollectionForSessionHandling_d__15;
}
namespace VROSC {
struct GarbageManager__DisableCollection_d__16;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GarbageManager);
MARK_VAL_T(::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15);
MARK_VAL_T(::VROSC::GarbageManager__DisableCollection_d__16);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.GarbageManager/<DisableCollection>d__16
struct CORDL_TYPE GarbageManager__DisableCollection_d__16 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18893d0, size 0x2b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1889680, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GarbageManager__DisableCollection_d__16() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::GarbageManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GarbageManager__DisableCollection_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::GarbageManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{609};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::GarbageManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GarbageManager__DisableCollection_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager__DisableCollection_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager__DisableCollection_d__16, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager__DisableCollection_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GarbageManager__DisableCollection_d__16, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.GarbageManager/<DisableCollectionForSessionHandling>d__15
struct CORDL_TYPE GarbageManager__DisableCollectionForSessionHandling_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x188968c, size 0x228, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18898b4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GarbageManager__DisableCollectionForSessionHandling_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::GarbageManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GarbageManager__DisableCollectionForSessionHandling_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::GarbageManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{610};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::GarbageManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GarbageManager
class CORDL_TYPE GarbageManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DisableCollectionForSessionHandling_d__15 = ::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15;

using _DisableCollection_d__16 = ::VROSC::GarbageManager__DisableCollection_d__16;

/// @brief Field _automaticCollectionEnabled, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__automaticCollectionEnabled, put=__cordl_internal_set__automaticCollectionEnabled)) bool  _automaticCollectionEnabled;

/// @brief Field _enableCollectionRequesters, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__enableCollectionRequesters, put=__cordl_internal_set__enableCollectionRequesters)) ::System::Collections::Generic::List_1<::System::Object*>*  _enableCollectionRequesters;

/// @brief Field _hardMaxForGC, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__hardMaxForGC, put=__cordl_internal_set__hardMaxForGC)) int64_t  _hardMaxForGC;

/// @brief Field _hardMaxForGCinMb, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__hardMaxForGCinMb, put=__cordl_internal_set__hardMaxForGCinMb)) float_t  _hardMaxForGCinMb;

/// @brief Field _hasClearedInit, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasClearedInit, put=__cordl_internal_set__hasClearedInit)) bool  _hasClearedInit;

/// @brief Field _initialGCEnableDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialGCEnableDuration, put=__cordl_internal_set__initialGCEnableDuration)) float_t  _initialGCEnableDuration;

/// @brief Field _initialGCEnableTimer, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialGCEnableTimer, put=__cordl_internal_set__initialGCEnableTimer)) float_t  _initialGCEnableTimer;

/// @brief Field _softMaxForGC, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__softMaxForGC, put=__cordl_internal_set__softMaxForGC)) int64_t  _softMaxForGC;

/// @brief Field _softMaxForGCinMg, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__softMaxForGCinMg, put=__cordl_internal_set__softMaxForGCinMg)) float_t  _softMaxForGCinMg;

/// @brief Method Awake, addr 0x1888168, size 0x670, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Collect, addr 0x1888f80, size 0xc8, virtual false, abstract: false, final false
inline void Collect(bool  checkMax) ;

/// @brief Method DisableCollection, addr 0x1889048, size 0x90, virtual false, abstract: false, final false
inline void DisableCollection() ;

/// @brief Method DisableCollectionForSessionHandling, addr 0x1889298, size 0x90, virtual false, abstract: false, final false
inline void DisableCollectionForSessionHandling() ;

/// @brief Method EnableAutomaticCollection, addr 0x18890d8, size 0x160, virtual false, abstract: false, final false
inline void EnableAutomaticCollection(bool  enable, ::System::Object*  requester) ;

/// @brief Method EnableCollectionForSessionHandling, addr 0x1889238, size 0x60, virtual false, abstract: false, final false
inline void EnableCollectionForSessionHandling() ;

/// @brief Method LoadFailed, addr 0x188933c, size 0x4, virtual false, abstract: false, final false
inline void LoadFailed(::StringW  sessionId, bool  isDefaultSession, ::VROSC::Error  error) ;

/// @brief Method LoadSucceeded, addr 0x1889338, size 0x4, virtual false, abstract: false, final false
inline void LoadSucceeded(::StringW  sessionId, bool  isDefaultSession) ;

static inline ::VROSC::GarbageManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18887d8, size 0x63c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RecorderSaveFailed, addr 0x188932c, size 0x4, virtual false, abstract: false, final false
inline void RecorderSaveFailed(::VROSC::Error  error) ;

/// @brief Method RecorderSaveSucceeded, addr 0x1889328, size 0x4, virtual false, abstract: false, final false
inline void RecorderSaveSucceeded() ;

/// @brief Method SaveFailed, addr 0x1889334, size 0x4, virtual false, abstract: false, final false
inline void SaveFailed(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SaveSucceeded, addr 0x1889330, size 0x4, virtual false, abstract: false, final false
inline void SaveSucceeded(::StringW  sessionId) ;

/// @brief Method Update, addr 0x1888e14, size 0x16c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__automaticCollectionEnabled() const;

constexpr bool& __cordl_internal_get__automaticCollectionEnabled() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__enableCollectionRequesters() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__enableCollectionRequesters() ;

constexpr int64_t const& __cordl_internal_get__hardMaxForGC() const;

constexpr int64_t& __cordl_internal_get__hardMaxForGC() ;

constexpr float_t const& __cordl_internal_get__hardMaxForGCinMb() const;

constexpr float_t& __cordl_internal_get__hardMaxForGCinMb() ;

constexpr bool const& __cordl_internal_get__hasClearedInit() const;

constexpr bool& __cordl_internal_get__hasClearedInit() ;

constexpr float_t const& __cordl_internal_get__initialGCEnableDuration() const;

constexpr float_t& __cordl_internal_get__initialGCEnableDuration() ;

constexpr float_t const& __cordl_internal_get__initialGCEnableTimer() const;

constexpr float_t& __cordl_internal_get__initialGCEnableTimer() ;

constexpr int64_t const& __cordl_internal_get__softMaxForGC() const;

constexpr int64_t& __cordl_internal_get__softMaxForGC() ;

constexpr float_t const& __cordl_internal_get__softMaxForGCinMg() const;

constexpr float_t& __cordl_internal_get__softMaxForGCinMg() ;

constexpr void __cordl_internal_set__automaticCollectionEnabled(bool  value) ;

constexpr void __cordl_internal_set__enableCollectionRequesters(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__hardMaxForGC(int64_t  value) ;

constexpr void __cordl_internal_set__hardMaxForGCinMb(float_t  value) ;

constexpr void __cordl_internal_set__hasClearedInit(bool  value) ;

constexpr void __cordl_internal_set__initialGCEnableDuration(float_t  value) ;

constexpr void __cordl_internal_set__initialGCEnableTimer(float_t  value) ;

constexpr void __cordl_internal_set__softMaxForGC(int64_t  value) ;

constexpr void __cordl_internal_set__softMaxForGCinMg(float_t  value) ;

/// @brief Method .ctor, addr 0x1889340, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GarbageManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GarbageManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GarbageManager(GarbageManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GarbageManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GarbageManager(GarbageManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{611};

/// @brief Field _softMaxForGCinMg, offset: 0x20, size: 0x4, def value: None
 float_t  ____softMaxForGCinMg;

/// @brief Field _hardMaxForGCinMb, offset: 0x24, size: 0x4, def value: None
 float_t  ____hardMaxForGCinMb;

/// @brief Field _initialGCEnableDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ____initialGCEnableDuration;

/// @brief Field _automaticCollectionEnabled, offset: 0x2c, size: 0x1, def value: None
 bool  ____automaticCollectionEnabled;

/// @brief Field _softMaxForGC, offset: 0x30, size: 0x8, def value: None
 int64_t  ____softMaxForGC;

/// @brief Field _hardMaxForGC, offset: 0x38, size: 0x8, def value: None
 int64_t  ____hardMaxForGC;

/// @brief Field _initialGCEnableTimer, offset: 0x40, size: 0x4, def value: None
 float_t  ____initialGCEnableTimer;

/// @brief Field _hasClearedInit, offset: 0x44, size: 0x1, def value: None
 bool  ____hasClearedInit;

/// @brief Field _enableCollectionRequesters, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____enableCollectionRequesters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GarbageManager, ____softMaxForGCinMg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____hardMaxForGCinMb) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____initialGCEnableDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____automaticCollectionEnabled) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____softMaxForGC) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____hardMaxForGC) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____initialGCEnableTimer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____hasClearedInit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::GarbageManager, ____enableCollectionRequesters) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GarbageManager, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GarbageManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GarbageManager*, "VROSC", "GarbageManager");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GarbageManager__DisableCollectionForSessionHandling_d__15, "VROSC", "GarbageManager/<DisableCollectionForSessionHandling>d__15");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GarbageManager__DisableCollection_d__16, "VROSC", "GarbageManager/<DisableCollection>d__16");

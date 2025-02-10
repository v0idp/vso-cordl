#pragma once
// IWYU pragma private; include "VROSC/LoopStationLoopHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationLoopHandler)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationDataController;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
struct LoopStationLoopHandler_LooperState;
}
namespace VROSC {
class LoopStationLoopHandler__LoadLoopsFlow_d__29;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass26_0;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass27_0;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass29_0;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass29_1;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
struct LoopStationLoopHandler_LooperState;
}
namespace VROSC {
class LoopStationLoopHandler;
}
namespace VROSC {
class LoopStationLoopHandler__LoadLoopsFlow_d__29;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass26_0;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass27_0;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass29_0;
}
namespace VROSC {
class LoopStationLoopHandler___c__DisplayClass29_1;
}
// Write type traits
MARK_VAL_T(::VROSC::LoopStationLoopHandler_LooperState);
MARK_REF_PTR_T(::VROSC::LoopStationLoopHandler);
MARK_REF_PTR_T(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29);
MARK_REF_PTR_T(::VROSC::LoopStationLoopHandler___c__DisplayClass26_0);
MARK_REF_PTR_T(::VROSC::LoopStationLoopHandler___c__DisplayClass27_0);
MARK_REF_PTR_T(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0);
MARK_REF_PTR_T(::VROSC::LoopStationLoopHandler___c__DisplayClass29_1);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationLoopHandler/LooperState
struct CORDL_TYPE LoopStationLoopHandler_LooperState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopStationLoopHandler_LooperState_Unwrapped
enum struct __LoopStationLoopHandler_LooperState_Unwrapped : int32_t {
__E_NoLoops = static_cast<int32_t>(0x0),
__E_GotLoops = static_cast<int32_t>(0x1),
__E_IsAtMaxNumber = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopStationLoopHandler_LooperState_Unwrapped () const noexcept {
return static_cast<__LoopStationLoopHandler_LooperState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLoopHandler_LooperState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopStationLoopHandler_LooperState(int32_t  value__) noexcept;

/// @brief Field GotLoops value: I32(1)
static ::VROSC::LoopStationLoopHandler_LooperState const GotLoops;

/// @brief Field IsAtMaxNumber value: I32(2)
static ::VROSC::LoopStationLoopHandler_LooperState const IsAtMaxNumber;

/// @brief Field NoLoops value: I32(0)
static ::VROSC::LoopStationLoopHandler_LooperState const NoLoops;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{749};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLoopHandler_LooperState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLoopHandler_LooperState, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLoopHandler/<>c__DisplayClass26_0
class CORDL_TYPE LoopStationLoopHandler___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStationLoopHandler>  __4__this;

/// @brief Field source, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::VROSC::LoopPlayer>  source;

static inline ::VROSC::LoopStationLoopHandler___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <CopyLoop>b__0, addr 0x18be7f8, size 0x130, virtual false, abstract: false, final false
inline void _CopyLoop_b__0(::VROSC::LoopPlayer*  loopPlayer) ;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::VROSC::LoopPlayer>  value) ;

/// @brief Method .ctor, addr 0x18be56c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLoopHandler___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLoopHandler___c__DisplayClass26_0(LoopStationLoopHandler___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLoopHandler___c__DisplayClass26_0(LoopStationLoopHandler___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{750};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLoopHandler>  _____4__this;

/// @brief Field source, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass26_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass26_0, ___source) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLoopHandler___c__DisplayClass26_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLoopHandler/<>c__DisplayClass27_0
class CORDL_TYPE LoopStationLoopHandler___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStationLoopHandler>  __4__this;

/// @brief Field newLoop, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_newLoop, put=__cordl_internal_set_newLoop)) ::UnityW<::VROSC::LoopPlayer>  newLoop;

/// @brief Field onLoopCreatedCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLoopCreatedCallback, put=__cordl_internal_set_onLoopCreatedCallback)) ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  onLoopCreatedCallback;

static inline ::VROSC::LoopStationLoopHandler___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <CreateLoop>b__0, addr 0x18be928, size 0x144, virtual false, abstract: false, final false
inline void _CreateLoop_b__0() ;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get_newLoop() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get_newLoop() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get_onLoopCreatedCallback() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get_onLoopCreatedCallback() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value) ;

constexpr void __cordl_internal_set_newLoop(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set_onLoopCreatedCallback(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

/// @brief Method .ctor, addr 0x18be574, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLoopHandler___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass27_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLoopHandler___c__DisplayClass27_0(LoopStationLoopHandler___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass27_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLoopHandler___c__DisplayClass27_0(LoopStationLoopHandler___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{751};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLoopHandler>  _____4__this;

/// @brief Field newLoop, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ___newLoop;

/// @brief Field onLoopCreatedCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  ___onLoopCreatedCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass27_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass27_0, ___newLoop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass27_0, ___onLoopCreatedCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLoopHandler___c__DisplayClass27_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLoopHandler/<>c__DisplayClass29_0
class CORDL_TYPE LoopStationLoopHandler___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStationLoopHandler>  __4__this;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::VROSC::LoopStationDataController*  data;

/// @brief Field loadedLoops, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadedLoops, put=__cordl_internal_set_loadedLoops)) int32_t  loadedLoops;

static inline ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0* New_ctor() ;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::LoopStationDataController* const& __cordl_internal_get_data() const;

constexpr ::VROSC::LoopStationDataController*& __cordl_internal_get_data() ;

constexpr int32_t const& __cordl_internal_get_loadedLoops() const;

constexpr int32_t& __cordl_internal_get_loadedLoops() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value) ;

constexpr void __cordl_internal_set_data(::VROSC::LoopStationDataController*  value) ;

constexpr void __cordl_internal_set_loadedLoops(int32_t  value) ;

/// @brief Method .ctor, addr 0x18bea6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLoopHandler___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLoopHandler___c__DisplayClass29_0(LoopStationLoopHandler___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLoopHandler___c__DisplayClass29_0(LoopStationLoopHandler___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{752};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  ___data;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLoopHandler>  _____4__this;

/// @brief Field loadedLoops, offset: 0x20, size: 0x4, def value: None
 int32_t  ___loadedLoops;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0, ___loadedLoops) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLoopHandler___c__DisplayClass29_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLoopHandler/<>c__DisplayClass29_1
class CORDL_TYPE LoopStationLoopHandler___c__DisplayClass29_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  CS$__8__locals1;

/// @brief Field groupId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupId, put=__cordl_internal_set_groupId)) ::StringW  groupId;

/// @brief Field trackId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackId, put=__cordl_internal_set_trackId)) ::StringW  trackId;

static inline ::VROSC::LoopStationLoopHandler___c__DisplayClass29_1* New_ctor() ;

/// @brief Method <LoadLoopsFlow>b__0, addr 0x18bea7c, size 0x1e8, virtual false, abstract: false, final false
inline void _LoadLoopsFlow_b__0(::VROSC::LoopPlayer*  loopPlayer) ;

constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::StringW const& __cordl_internal_get_groupId() const;

constexpr ::StringW& __cordl_internal_get_groupId() ;

constexpr ::StringW const& __cordl_internal_get_trackId() const;

constexpr ::StringW& __cordl_internal_get_trackId() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  value) ;

constexpr void __cordl_internal_set_groupId(::StringW  value) ;

constexpr void __cordl_internal_set_trackId(::StringW  value) ;

/// @brief Method .ctor, addr 0x18bea74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLoopHandler___c__DisplayClass29_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass29_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLoopHandler___c__DisplayClass29_1(LoopStationLoopHandler___c__DisplayClass29_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler___c__DisplayClass29_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLoopHandler___c__DisplayClass29_1(LoopStationLoopHandler___c__DisplayClass29_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{753};

/// @brief Field trackId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___trackId;

/// @brief Field groupId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___groupId;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass29_1, ___trackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass29_1, ___groupId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler___c__DisplayClass29_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLoopHandler___c__DisplayClass29_1, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLoopHandler/<LoadLoopsFlow>d__29
class CORDL_TYPE LoopStationLoopHandler__LoadLoopsFlow_d__29 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStationLoopHandler>  __4__this;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  __8__1;

/// @brief Field <trackIds>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackIds_5__2, put=__cordl_internal_set__trackIds_5__2)) ::System::Collections::Generic::List_1<::StringW>*  _trackIds_5__2;

/// @brief Field callback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::VROSC::LoopStationDataController*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18bec68, size 0x3dc, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18bf044, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18bf04c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18bf084, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18bec64, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0* const& __cordl_internal_get___8__1() const;

constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*& __cordl_internal_get___8__1() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__trackIds_5__2() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__trackIds_5__2() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr ::VROSC::LoopStationDataController* const& __cordl_internal_get_data() const;

constexpr ::VROSC::LoopStationDataController*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value) ;

constexpr void __cordl_internal_set___8__1(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  value) ;

constexpr void __cordl_internal_set__trackIds_5__2(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

constexpr void __cordl_internal_set_data(::VROSC::LoopStationDataController*  value) ;

/// @brief Method .ctor, addr 0x18be5f0, size 0x28, virtual false, abstract: false, final false
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
constexpr LoopStationLoopHandler__LoadLoopsFlow_d__29() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler__LoadLoopsFlow_d__29", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLoopHandler__LoadLoopsFlow_d__29(LoopStationLoopHandler__LoadLoopsFlow_d__29 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler__LoadLoopsFlow_d__29", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLoopHandler__LoadLoopsFlow_d__29(LoopStationLoopHandler__LoadLoopsFlow_d__29 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{754};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  ___data;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLoopHandler>  _____4__this;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  _____8__1;

/// @brief Field callback, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___callback;

/// @brief Field <trackIds>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____trackIds_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, _____8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, ___callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, ____trackIds_5__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationLoopHandler
class CORDL_TYPE LoopStationLoopHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LooperState = ::VROSC::LoopStationLoopHandler_LooperState;

using _LoadLoopsFlow_d__29 = ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29;

using __c__DisplayClass26_0 = ::VROSC::LoopStationLoopHandler___c__DisplayClass26_0;

using __c__DisplayClass27_0 = ::VROSC::LoopStationLoopHandler___c__DisplayClass27_0;

using __c__DisplayClass29_0 = ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0;

using __c__DisplayClass29_1 = ::VROSC::LoopStationLoopHandler___c__DisplayClass29_1;

 __declspec(property(get=get_ActiveLoops)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  ActiveLoops;

 __declspec(property(get=get_IsCopying, put=set_IsCopying)) bool  IsCopying;

 __declspec(property(get=get_IsMaxLoopsReached)) bool  IsMaxLoopsReached;

 __declspec(property(get=get_LoopCount)) int32_t  LoopCount;

/// @brief Field OnLoopAmountChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoopAmountChanged, put=__cordl_internal_set_OnLoopAmountChanged)) ::System::Action_1<int32_t>*  OnLoopAmountChanged;

/// @brief Field OnLoopCreated, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoopCreated, put=__cordl_internal_set_OnLoopCreated)) ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  OnLoopCreated;

/// @brief Field OnLoopDeleted, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoopDeleted, put=__cordl_internal_set_OnLoopDeleted)) ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  OnLoopDeleted;

/// @brief Field <IsCopying>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCopying_k__BackingField, put=__cordl_internal_set__IsCopying_k__BackingField)) bool  _IsCopying_k__BackingField;

/// @brief Field _activeLoops, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeLoops, put=__cordl_internal_set__activeLoops)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  _activeLoops;

/// @brief Field _loopLocation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLocation, put=__cordl_internal_set__loopLocation)) ::UnityW<::UnityEngine::Transform>  _loopLocation;

/// @brief Field _loopPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPrefab, put=__cordl_internal_set__loopPrefab)) ::UnityW<::VROSC::LoopPlayer>  _loopPrefab;

/// @brief Field _loopStation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Method CopyLoop, addr 0x18be048, size 0x344, virtual false, abstract: false, final false
inline void CopyLoop(::VROSC::LoopPlayer*  source) ;

/// @brief Method CreateLoop, addr 0x18ba758, size 0x280, virtual false, abstract: false, final false
inline void CreateLoop(::StringW  trackId, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::VROSC::LoopStationGroup*  group, ::UnityEngine::Color  color, bool  playImmediately, bool  overdub, ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  onLoopCreatedCallback) ;

/// @brief Method GetIsAnyLoopGrabbed, addr 0x18b1f9c, size 0x174, virtual false, abstract: false, final false
inline bool GetIsAnyLoopGrabbed() ;

/// @brief Method GetLoopByID, addr 0x18af7e8, size 0x194, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> GetLoopByID(::StringW  loopID) ;

/// @brief Method GetState, addr 0x18accc0, size 0x88, virtual false, abstract: false, final false
inline ::VROSC::LoopStationLoopHandler_LooperState GetState() ;

/// @brief Method IsEmpty, addr 0x18be51c, size 0x50, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method LoadLoops, addr 0x18affb4, size 0x80, virtual false, abstract: false, final false
inline void LoadLoops(::VROSC::LoopStationDataController*  data, ::System::Action*  callback) ;

/// @brief Method LoadLoopsFlow, addr 0x18be57c, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadLoopsFlow(::VROSC::LoopStationDataController*  data, ::System::Action*  callback) ;

static inline ::VROSC::LoopStationLoopHandler* New_ctor() ;

/// @brief Method OnDeleteOperationCompleted, addr 0x18be6f0, size 0x8c, virtual false, abstract: false, final false
inline void OnDeleteOperationCompleted() ;

/// @brief Method OnEnable, addr 0x18be3b8, size 0x164, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayAll, addr 0x18ae7e4, size 0x2c0, virtual false, abstract: false, final false
inline void PlayAll() ;

/// @brief Method RemoveAllLoops, addr 0x18ae6a0, size 0x94, virtual false, abstract: false, final false
inline void RemoveAllLoops() ;

/// @brief Method RemoveLoop, addr 0x18be618, size 0xd8, virtual false, abstract: false, final false
inline void RemoveLoop(::VROSC::LoopPlayer*  loopPlayer, bool  fromReset) ;

/// @brief Method Setup, addr 0x18be3b0, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation) ;

/// @brief Method StopAll, addr 0x18aeabc, size 0x150, virtual false, abstract: false, final false
inline void StopAll() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnLoopAmountChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnLoopAmountChanged() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get_OnLoopCreated() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get_OnLoopCreated() ;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& __cordl_internal_get_OnLoopDeleted() const;

constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& __cordl_internal_get_OnLoopDeleted() ;

constexpr bool const& __cordl_internal_get__IsCopying_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCopying_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get__activeLoops() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get__activeLoops() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__loopLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__loopLocation() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPrefab() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPrefab() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr void __cordl_internal_set_OnLoopAmountChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnLoopCreated(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set_OnLoopDeleted(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value) ;

constexpr void __cordl_internal_set__IsCopying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activeLoops(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set__loopLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__loopPrefab(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

/// @brief Method .ctor, addr 0x18be77c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveLoops, addr 0x18be394, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* get_ActiveLoops() ;

/// @brief Method get_IsCopying, addr 0x18be39c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCopying() ;

/// @brief Method get_IsMaxLoopsReached, addr 0x18b6ae0, size 0x18, virtual false, abstract: false, final false
inline bool get_IsMaxLoopsReached() ;

/// @brief Method get_LoopCount, addr 0x18b3100, size 0x48, virtual false, abstract: false, final false
inline int32_t get_LoopCount() ;

/// @brief Method set_IsCopying, addr 0x18be3a4, size 0xc, virtual false, abstract: false, final false
inline void set_IsCopying(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationLoopHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationLoopHandler(LoopStationLoopHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationLoopHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationLoopHandler(LoopStationLoopHandler const& ) = delete;

/// @brief Field MaxActiveLoops offset 0xffffffff size 0x4
static constexpr int32_t  MaxActiveLoops{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{755};

/// @brief Field _loopPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPrefab;

/// @brief Field _loopLocation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____loopLocation;

/// @brief Field _activeLoops, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  ____activeLoops;

/// @brief Field _loopStation, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field <IsCopying>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsCopying_k__BackingField;

/// @brief Field OnLoopDeleted, offset: 0x48, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  ___OnLoopDeleted;

/// @brief Field OnLoopCreated, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  ___OnLoopCreated;

/// @brief Field OnLoopAmountChanged, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnLoopAmountChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationLoopHandler, ____loopPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler, ____loopLocation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler, ____activeLoops) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler, ____loopStation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler, ____IsCopying_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler, ___OnLoopDeleted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler, ___OnLoopCreated) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationLoopHandler, ___OnLoopAmountChanged) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationLoopHandler, 0x60>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler_LooperState, "VROSC", "LoopStationLoopHandler/LooperState");
NEED_NO_BOX(::VROSC::LoopStationLoopHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler*, "VROSC", "LoopStationLoopHandler");
NEED_NO_BOX(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*, "VROSC", "LoopStationLoopHandler/<LoadLoopsFlow>d__29");
NEED_NO_BOX(::VROSC::LoopStationLoopHandler___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler___c__DisplayClass26_0*, "VROSC", "LoopStationLoopHandler/<>c__DisplayClass26_0");
NEED_NO_BOX(::VROSC::LoopStationLoopHandler___c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler___c__DisplayClass27_0*, "VROSC", "LoopStationLoopHandler/<>c__DisplayClass27_0");
NEED_NO_BOX(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*, "VROSC", "LoopStationLoopHandler/<>c__DisplayClass29_0");
NEED_NO_BOX(::VROSC::LoopStationLoopHandler___c__DisplayClass29_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler___c__DisplayClass29_1*, "VROSC", "LoopStationLoopHandler/<>c__DisplayClass29_1");

#pragma once
// IWYU pragma private; include "VROSC/TransformAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformAnchor)
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class AnchorState;
}
namespace VROSC {
class TransformAnchor__Init_d__10;
}
namespace VROSC {
class TransformAnchor__WaitForNearestAnchor_d__14;
}
namespace VROSC {
class TransformAnchor___c__DisplayClass15_0;
}
// Forward declare root types
namespace VROSC {
class TransformAnchor;
}
namespace VROSC {
class TransformAnchor__Init_d__10;
}
namespace VROSC {
class TransformAnchor__WaitForNearestAnchor_d__14;
}
namespace VROSC {
class TransformAnchor___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformAnchor);
MARK_REF_PTR_T(::VROSC::TransformAnchor__Init_d__10);
MARK_REF_PTR_T(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14);
MARK_REF_PTR_T(::VROSC::TransformAnchor___c__DisplayClass15_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformAnchor/<>c__DisplayClass15_0
class CORDL_TYPE TransformAnchor___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onComplete, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action_1<bool>*  onComplete;

static inline ::VROSC::TransformAnchor___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <Save>b__0, addr 0x172b4fc, size 0x24, virtual false, abstract: false, final false
inline void _Save_b__0(::GlobalNamespace::OVRSpatialAnchor*  anchor, bool  success) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_onComplete() ;

constexpr void __cordl_internal_set_onComplete(::System::Action_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x172b4ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformAnchor___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformAnchor___c__DisplayClass15_0(TransformAnchor___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformAnchor___c__DisplayClass15_0(TransformAnchor___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1049};

/// @brief Field onComplete, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___onComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformAnchor___c__DisplayClass15_0, ___onComplete) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformAnchor___c__DisplayClass15_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformAnchor/<Init>d__10
class CORDL_TYPE TransformAnchor__Init_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::TransformAnchor>  __4__this;

/// @brief Field <timer>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__timer_5__2, put=__cordl_internal_set__timer_5__2)) float_t  _timer_5__2;

/// @brief Field onComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action_1<bool>*  onComplete;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x172b524, size 0x248, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::TransformAnchor__Init_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x172b76c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x172b774, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x172b7ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x172b520, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::TransformAnchor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::TransformAnchor>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__timer_5__2() const;

constexpr float_t& __cordl_internal_get__timer_5__2() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_onComplete() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::TransformAnchor>  value) ;

constexpr void __cordl_internal_set__timer_5__2(float_t  value) ;

constexpr void __cordl_internal_set_onComplete(::System::Action_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x172b428, size 0x28, virtual false, abstract: false, final false
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
constexpr TransformAnchor__Init_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor__Init_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformAnchor__Init_d__10(TransformAnchor__Init_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor__Init_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformAnchor__Init_d__10(TransformAnchor__Init_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1050};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformAnchor>  _____4__this;

/// @brief Field onComplete, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___onComplete;

/// @brief Field <timer>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____timer_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformAnchor__Init_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__Init_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__Init_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__Init_d__10, ___onComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__Init_d__10, ____timer_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformAnchor__Init_d__10, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformAnchor/<WaitForNearestAnchor>d__14
class CORDL_TYPE TransformAnchor__WaitForNearestAnchor_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::TransformAnchor>  __4__this;

/// @brief Field <isCompleted>5__2, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCompleted_5__2, put=__cordl_internal_set__isCompleted_5__2)) bool  _isCompleted_5__2;

/// @brief Field anchorStates, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorStates, put=__cordl_internal_set_anchorStates)) ::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  anchorStates;

/// @brief Field onComplete, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onComplete;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x172b7b8, size 0x43c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x172bbf4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x172bbfc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x172bc34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x172b7b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::TransformAnchor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::TransformAnchor>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__isCompleted_5__2() const;

constexpr bool& __cordl_internal_get__isCompleted_5__2() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::AnchorState*>* const& __cordl_internal_get_anchorStates() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::AnchorState*>*& __cordl_internal_get_anchorStates() ;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get_onComplete() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::TransformAnchor>  value) ;

constexpr void __cordl_internal_set__isCompleted_5__2(bool  value) ;

constexpr void __cordl_internal_set_anchorStates(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  value) ;

constexpr void __cordl_internal_set_onComplete(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// @brief Method .ctor, addr 0x172b4c4, size 0x28, virtual false, abstract: false, final false
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
constexpr TransformAnchor__WaitForNearestAnchor_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor__WaitForNearestAnchor_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformAnchor__WaitForNearestAnchor_d__14(TransformAnchor__WaitForNearestAnchor_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor__WaitForNearestAnchor_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformAnchor__WaitForNearestAnchor_d__14(TransformAnchor__WaitForNearestAnchor_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1051};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field anchorStates, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  ___anchorStates;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformAnchor>  _____4__this;

/// @brief Field onComplete, offset: 0x30, size: 0x8, def value: None
 ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  ___onComplete;

/// @brief Field <isCompleted>5__2, offset: 0x38, size: 0x1, def value: None
 bool  ____isCompleted_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14, ___anchorStates) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14, ___onComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14, ____isCompleted_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Guid, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformAnchor
class CORDL_TYPE TransformAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Init_d__10 = ::VROSC::TransformAnchor__Init_d__10;

using _WaitForNearestAnchor_d__14 = ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14;

using __c__DisplayClass15_0 = ::VROSC::TransformAnchor___c__DisplayClass15_0;

 __declspec(property(get=get_SpaceHandle, put=set_SpaceHandle)) uint64_t  SpaceHandle;

 __declspec(property(get=get_Uuid, put=set_Uuid)) ::System::Guid  Uuid;

/// @brief Field <SpaceHandle>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpaceHandle_k__BackingField, put=__cordl_internal_set__SpaceHandle_k__BackingField)) uint64_t  _SpaceHandle_k__BackingField;

/// @brief Field <Uuid>k__BackingField, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__Uuid_k__BackingField, put=__cordl_internal_set__Uuid_k__BackingField)) ::System::Guid  _Uuid_k__BackingField;

/// @brief Field _spatialAnchor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__spatialAnchor, put=__cordl_internal_set__spatialAnchor)) ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  _spatialAnchor;

/// @brief Method Cleanup, addr 0x172a81c, size 0xd0, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method EraseData, addr 0x1729c80, size 0x74, virtual false, abstract: false, final false
inline void EraseData() ;

/// @brief Method FindNearestAnchor, addr 0x172b194, size 0x20, virtual false, abstract: false, final false
inline void FindNearestAnchor(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  anchorStates, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onComplete) ;

/// @brief Method Init, addr 0x1729cf4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Init(::System::Action_1<bool>*  onComplete) ;

static inline ::VROSC::TransformAnchor* New_ctor() ;

/// @brief Method Save, addr 0x172a6d0, size 0x14c, virtual false, abstract: false, final false
inline void Save(::System::Action_1<bool>*  onComplete) ;

/// @brief Method WaitForNearestAnchor, addr 0x172b450, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForNearestAnchor(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  anchorStates, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onComplete) ;

constexpr uint64_t const& __cordl_internal_get__SpaceHandle_k__BackingField() const;

constexpr uint64_t& __cordl_internal_get__SpaceHandle_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__Uuid_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__Uuid_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& __cordl_internal_get__spatialAnchor() const;

constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& __cordl_internal_get__spatialAnchor() ;

constexpr void __cordl_internal_set__SpaceHandle_k__BackingField(uint64_t  value) ;

constexpr void __cordl_internal_set__Uuid_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__spatialAnchor(::UnityW<::GlobalNamespace::OVRSpatialAnchor>  value) ;

/// @brief Method .ctor, addr 0x172b4f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SpaceHandle, addr 0x172b418, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_SpaceHandle() ;

/// @brief Method get_Uuid, addr 0x172b404, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_Uuid() ;

/// @brief Method set_SpaceHandle, addr 0x172b420, size 0x8, virtual false, abstract: false, final false
inline void set_SpaceHandle(uint64_t  value) ;

/// @brief Method set_Uuid, addr 0x172b410, size 0x8, virtual false, abstract: false, final false
inline void set_Uuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformAnchor(TransformAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformAnchor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformAnchor(TransformAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1052};

/// @brief Field _initTimeout offset 0xffffffff size 0x4
static constexpr float_t  _initTimeout{static_cast<float_t>(2.0f)};

/// @brief Field _spatialAnchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  ____spatialAnchor;

/// @brief Field <Uuid>k__BackingField, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  ____Uuid_k__BackingField;

/// @brief Field <SpaceHandle>k__BackingField, offset: 0x38, size: 0x8, def value: None
 uint64_t  ____SpaceHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TransformAnchor, ____spatialAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor, ____Uuid_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TransformAnchor, ____SpaceHandle_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TransformAnchor, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformAnchor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformAnchor*, "VROSC", "TransformAnchor");
NEED_NO_BOX(::VROSC::TransformAnchor__Init_d__10);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformAnchor__Init_d__10*, "VROSC", "TransformAnchor/<Init>d__10");
NEED_NO_BOX(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*, "VROSC", "TransformAnchor/<WaitForNearestAnchor>d__14");
NEED_NO_BOX(::VROSC::TransformAnchor___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformAnchor___c__DisplayClass15_0*, "VROSC", "TransformAnchor/<>c__DisplayClass15_0");

#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticBatcher)
namespace GlobalNamespace {
class StaticBatcher__Start_d__1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticBatcher;
}
namespace GlobalNamespace {
class StaticBatcher__Start_d__1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticBatcher);
MARK_REF_PTR_T(::GlobalNamespace::StaticBatcher__Start_d__1);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticBatcher/<Start>d__1
class CORDL_TYPE StaticBatcher__Start_d__1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::StaticBatcher>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16c56d8, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::StaticBatcher__Start_d__1* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16c5784, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16c578c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16c57c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16c56d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::StaticBatcher> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::StaticBatcher>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::StaticBatcher>  value) ;

/// @brief Method .ctor, addr 0x16c555c, size 0x28, virtual false, abstract: false, final false
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
constexpr StaticBatcher__Start_d__1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticBatcher__Start_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticBatcher__Start_d__1(StaticBatcher__Start_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatcher__Start_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticBatcher__Start_d__1(StaticBatcher__Start_d__1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{69};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StaticBatcher>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticBatcher__Start_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticBatcher__Start_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticBatcher__Start_d__1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBatcher__Start_d__1, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticBatcher
class CORDL_TYPE StaticBatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__1 = ::GlobalNamespace::StaticBatcher__Start_d__1;

/// @brief Field _delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) float_t  _delay;

/// @brief Method Batch, addr 0x16c5584, size 0x148, virtual false, abstract: false, final false
inline void Batch() ;

static inline ::GlobalNamespace::StaticBatcher* New_ctor() ;

/// @brief Method Start, addr 0x16c54fc, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

constexpr float_t const& __cordl_internal_get__delay() const;

constexpr float_t& __cordl_internal_get__delay() ;

constexpr void __cordl_internal_set__delay(float_t  value) ;

/// @brief Method .ctor, addr 0x16c56cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticBatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticBatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticBatcher(StaticBatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticBatcher(StaticBatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{70};

/// @brief Field _delay, offset: 0x20, size: 0x4, def value: None
 float_t  ____delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticBatcher, ____delay) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticBatcher, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticBatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatcher*, "", "StaticBatcher");
NEED_NO_BOX(::GlobalNamespace::StaticBatcher__Start_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticBatcher__Start_d__1*, "", "StaticBatcher/<Start>d__1");

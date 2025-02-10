#pragma once
// IWYU pragma private; include "RSG/Promises/EnumerableExt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumerableExt)
namespace RSG::Promises {
template<typename T>
class EnumerableExt__FromItems_d__2_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class Object;
}
// Forward declare root types
namespace RSG::Promises {
class EnumerableExt;
}
namespace RSG::Promises {
template<typename T>
class EnumerableExt__FromItems_d__2_1;
}
// Write type traits
MARK_REF_PTR_T(::RSG::Promises::EnumerableExt);
MARK_GEN_REF_PTR_T(::RSG::Promises::EnumerableExt__FromItems_d__2_1);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace RSG::Promises {
// cpp template
template<typename T>
// Is value type: false
// CS Name: RSG.Promises.EnumerableExt/<FromItems>d__2`1<T>
class CORDL_TYPE EnumerableExt__FromItems_d__2_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_T__get_Current)) T  System_Collections_Generic_IEnumerator_T__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) T  __2__current;

/// @brief Field <>3__items, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__items, put=__cordl_internal_set___3__items)) ::ArrayW<T,::Array<T>*>  __3__items;

/// @brief Field <>7__wrap1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::ArrayW<T,::Array<T>*>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) int32_t  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field items, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::ArrayW<T,::Array<T>*>  items;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::RSG::Promises::EnumerableExt__FromItems_d__2_1<T>* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T System_Collections_Generic_IEnumerator_T__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr T const& __cordl_internal_get___2__current() const;

constexpr T& __cordl_internal_get___2__current() ;

constexpr ::ArrayW<T,::Array<T>*> const& __cordl_internal_get___3__items() const;

constexpr ::ArrayW<T,::Array<T>*>& __cordl_internal_get___3__items() ;

constexpr ::ArrayW<T,::Array<T>*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::ArrayW<T,::Array<T>*>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

constexpr int32_t& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::ArrayW<T,::Array<T>*> const& __cordl_internal_get_items() const;

constexpr ::ArrayW<T,::Array<T>*>& __cordl_internal_get_items() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(T  value) ;

constexpr void __cordl_internal_set___3__items(::ArrayW<T,::Array<T>*>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::ArrayW<T,::Array<T>*>  value) ;

constexpr void __cordl_internal_set___7__wrap2(int32_t  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_items(::ArrayW<T,::Array<T>*>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableExt__FromItems_d__2_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExt__FromItems_d__2_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableExt__FromItems_d__2_1(EnumerableExt__FromItems_d__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExt__FromItems_d__2_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableExt__FromItems_d__2_1(EnumerableExt__FromItems_d__2_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1729};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 T  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field items, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  ___items;

/// @brief Field <>3__items, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  _____3__items;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
 int32_t  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG::Promises
// Dependencies System.Object
namespace RSG::Promises {
// Is value type: false
// CS Name: RSG.Promises.EnumerableExt
class CORDL_TYPE EnumerableExt : public ::System::Object {
public:
// Declarations
template<typename T>
using _FromItems_d__2_1 = ::RSG::Promises::EnumerableExt__FromItems_d__2_1<T>;

/// @brief Method Each, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Each(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Action_1<T>*  fn) ;

/// @brief Method Each, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Each(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Action_2<T,int32_t>*  fn) ;

/// @brief Method FromItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<T>* FromItems(::ArrayW<T,::Array<T>*>  items) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableExt(EnumerableExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableExt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableExt(EnumerableExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1730};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RSG::Promises::EnumerableExt, 0x10>, "Size mismatch!");

} // namespace end def RSG::Promises
NEED_NO_BOX(::RSG::Promises::EnumerableExt);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promises::EnumerableExt*, "RSG.Promises", "EnumerableExt");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Promises::EnumerableExt__FromItems_d__2_1, "RSG.Promises", "EnumerableExt/<FromItems>d__2`1");

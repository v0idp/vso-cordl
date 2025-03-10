#pragma once
// IWYU pragma private; include "System/Collections/Generic/Queue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Queue_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
struct Queue_1_Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
struct Queue_1_Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::Queue_1);
MARK_GEN_VAL_T(::System::Collections::Generic::Queue_1_Enumerator);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Collections.Generic.Queue`1/Enumerator<T>
struct CORDL_TYPE Queue_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Queue_1<T>*  q) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Queue_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
constexpr Queue_1_Enumerator(::System::Collections::Generic::Queue_1<T>*  _q, int32_t  _version, int32_t  _index, T  _currentElement) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3506};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _q, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  _q;

/// @brief Field _version, offset: 0x8, size: 0x4, def value: None
 int32_t  _version;

/// @brief Field _index, offset: 0xc, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _currentElement, offset: 0x10, size: 0x8, def value: None
 T  _currentElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>, System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Collections.Generic.Queue`1<T>
class CORDL_TYPE Queue_1 : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::Queue_1_Enumerator<T>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Field _array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__array, put=__cordl_internal_set__array)) ::ArrayW<T,::Array<T>*>  _array;

/// @brief Field _head, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__head, put=__cordl_internal_set__head)) int32_t  _head;

/// @brief Field _size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

/// @brief Field _syncRoot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncRoot, put=__cordl_internal_set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _tail, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tail, put=__cordl_internal_set__tail)) int32_t  _tail;

/// @brief Field _version, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Dequeue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  item) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Queue_1_Enumerator<T> GetEnumerator() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MoveNext(::ByRef<int32_t>  index) ;

static inline ::System::Collections::Generic::Queue_1<T>* New_ctor() ;

static inline ::System::Collections::Generic::Queue_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ThrowForEmptyQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ThrowForEmptyQueue() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T,::Array<T>*> ToArray() ;

constexpr ::ArrayW<T,::Array<T>*> const& __cordl_internal_get__array() const;

constexpr ::ArrayW<T,::Array<T>*>& __cordl_internal_get__array() ;

constexpr int32_t const& __cordl_internal_get__head() const;

constexpr int32_t& __cordl_internal_get__head() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

constexpr ::System::Object*& __cordl_internal_get__syncRoot() ;

constexpr int32_t const& __cordl_internal_get__tail() const;

constexpr int32_t& __cordl_internal_get__tail() ;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr void __cordl_internal_set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr void __cordl_internal_set__head(int32_t  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

constexpr void __cordl_internal_set__syncRoot(::System::Object*  value) ;

constexpr void __cordl_internal_set__tail(int32_t  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Queue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

/// @brief Field GrowFactor offset 0xffffffff size 0x4
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field MinimumGrow offset 0xffffffff size 0x4
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3507};

/// @brief Field _array, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  ____array;

/// @brief Field _head, offset: 0x18, size: 0x4, def value: None
 int32_t  ____head;

/// @brief Field _tail, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____tail;

/// @brief Field _size, offset: 0x20, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _version, offset: 0x24, size: 0x4, def value: None
 int32_t  ____version;

/// @brief Field _syncRoot, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____syncRoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Queue_1, "System.Collections.Generic", "Queue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::Queue_1_Enumerator, "System.Collections.Generic", "Queue`1/Enumerator");

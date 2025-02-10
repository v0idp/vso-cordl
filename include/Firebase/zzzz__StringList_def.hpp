#pragma once
// IWYU pragma private; include "Firebase/StringList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringList)
namespace Firebase {
class StringList_StringListEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase {
class StringList;
}
namespace Firebase {
class StringList_StringListEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::StringList);
MARK_REF_PTR_T(::Firebase::StringList_StringListEnumerator);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.StringList/StringListEnumerator
class CORDL_TYPE StringList_StringListEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::StringW  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field collectionRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionRef, put=__cordl_internal_set_collectionRef)) ::Firebase::StringList*  collectionRef;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObject, put=__cordl_internal_set_currentObject)) ::System::Object*  currentObject;

/// @brief Field currentSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) int32_t  currentSize;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18f6404, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x18f6320, size 0x64, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Firebase::StringList_StringListEnumerator* New_ctor(::Firebase::StringList*  collection) ;

/// @brief Method Reset, addr 0x18f6384, size 0x80, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18f631c, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr ::Firebase::StringList* const& __cordl_internal_get_collectionRef() const;

constexpr ::Firebase::StringList*& __cordl_internal_get_collectionRef() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::System::Object* const& __cordl_internal_get_currentObject() const;

constexpr ::System::Object*& __cordl_internal_get_currentObject() ;

constexpr int32_t const& __cordl_internal_get_currentSize() const;

constexpr int32_t& __cordl_internal_get_currentSize() ;

constexpr void __cordl_internal_set_collectionRef(::Firebase::StringList*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_currentSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x18f5d44, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Firebase::StringList*  collection) ;

/// @brief Method get_Current, addr 0x18f621c, size 0x100, virtual true, abstract: false, final true
inline ::StringW get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringList_StringListEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringList_StringListEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringList_StringListEnumerator(StringList_StringListEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringList_StringListEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringList_StringListEnumerator(StringList_StringListEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11831};

/// @brief Field collectionRef, offset: 0x10, size: 0x8, def value: None
 ::Firebase::StringList*  ___collectionRef;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentObject, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___currentObject;

/// @brief Field currentSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::StringList_StringListEnumerator, ___collectionRef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::StringList_StringListEnumerator, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::StringList_StringListEnumerator, ___currentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::StringList_StringListEnumerator, ___currentSize) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::StringList_StringListEnumerator, 0x30>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IList`1<T>, System.Collections.IEnumerable, System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase {
// Is value type: false
// CS Name: Firebase.StringList
class CORDL_TYPE StringList : public ::System::Object {
public:
// Declarations
using StringListEnumerator = ::Firebase::StringList_StringListEnumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::StringW>"
constexpr operator  ::System::Collections::Generic::IList_1<::StringW>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x18f5e6c, size 0x98, virtual true, abstract: false, final true
inline void Add(::StringW  x) ;

/// @brief Method Clear, addr 0x18f5de4, size 0x88, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x18f603c, size 0xa0, virtual true, abstract: false, final true
inline bool Contains(::StringW  value) ;

/// @brief Method CopyTo, addr 0x18f5a18, size 0x38, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::StringW,::Array<::StringW>*>  array, int32_t  arrayIndex) ;

/// @brief Method CopyTo, addr 0x18f5a50, size 0x1fc, virtual false, abstract: false, final false
inline void CopyTo(int32_t  index, ::ArrayW<::StringW,::Array<::StringW>*>  array, int32_t  arrayIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x18f5698, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x18f55f8, size 0xa0, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method IndexOf, addr 0x18f60dc, size 0xa0, virtual true, abstract: false, final true
inline int32_t IndexOf(::StringW  value) ;

/// @brief Method Insert, addr 0x18f5f04, size 0xa0, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::StringW  x) ;

static inline ::Firebase::StringList* New_ctor() ;

static inline ::Firebase::StringList* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method Remove, addr 0x18f617c, size 0xa0, virtual true, abstract: false, final true
inline bool Remove(::StringW  value) ;

/// @brief Method RemoveAt, addr 0x18f5fa4, size 0x98, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.Generic.IEnumerable<string>.GetEnumerator, addr 0x18f5cec, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_string__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18f5d8c, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18f54f8, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18f54a4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x18f55b4, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::StringList*  obj) ;

/// @brief Method get_Count, addr 0x18f5984, size 0x4, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x18f5834, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x18f583c, size 0x4, virtual true, abstract: false, final true
inline ::StringW get_Item(int32_t  index) ;

/// @brief Method getitem, addr 0x18f5840, size 0xa0, virtual false, abstract: false, final false
inline ::StringW getitem(int32_t  index) ;

/// @brief Method getitemcopy, addr 0x18f5c4c, size 0xa0, virtual false, abstract: false, final false
inline ::StringW getitemcopy(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::StringW>"
constexpr ::System::Collections::Generic::ICollection_1<::StringW>* i___System__Collections__Generic__ICollection_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::StringW>"
constexpr ::System::Collections::Generic::IList_1<::StringW>* i___System__Collections__Generic__IList_1___StringW_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Item, addr 0x18f58e0, size 0x4, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::StringW  value) ;

/// @brief Method setitem, addr 0x18f58e4, size 0xa0, virtual false, abstract: false, final false
inline void setitem(int32_t  index, ::StringW  val) ;

/// @brief Method size, addr 0x18f5988, size 0x90, virtual false, abstract: false, final false
inline uint32_t size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringList(StringList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringList(StringList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11832};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::StringList, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::StringList, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::StringList, 0x28>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::StringList);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::StringList*, "Firebase", "StringList");
NEED_NO_BOX(::Firebase::StringList_StringListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::StringList_StringListEnumerator*, "Firebase", "StringList/StringListEnumerator");

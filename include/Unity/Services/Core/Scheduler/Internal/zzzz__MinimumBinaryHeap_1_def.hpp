#pragma once
// IWYU pragma private; include "Unity/Services/Core/Scheduler/Internal/MinimumBinaryHeap_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Scheduler/Internal/zzzz__MinimumBinaryHeap_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MinimumBinaryHeap_1)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Scheduler::Internal {
template<typename T>
struct MinimumBinaryHeap_1___c__DisplayClass21_0;
}
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
template<typename T>
class MinimumBinaryHeap_1;
}
namespace Unity::Services::Core::Scheduler::Internal {
template<typename T>
struct MinimumBinaryHeap_1___c__DisplayClass21_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1);
MARK_GEN_VAL_T(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1___c__DisplayClass21_0);
// Dependencies 
namespace Unity::Services::Core::Scheduler::Internal {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1/<>c__DisplayClass21_0<T>
struct CORDL_TYPE MinimumBinaryHeap_1___c__DisplayClass21_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MinimumBinaryHeap_1___c__DisplayClass21_0() ;

// Ctor Parameters [CppParam { name: "smallest", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*", modifiers: "", def_value: None }]
constexpr MinimumBinaryHeap_1___c__DisplayClass21_0(int32_t  smallest, int32_t  currentIndex, ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field smallest, offset: 0x0, size: 0x4, def value: None
 int32_t  smallest;

/// @brief Field currentIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  currentIndex;

/// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
 ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>*  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Scheduler::Internal
// Dependencies Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap
namespace Unity::Services::Core::Scheduler::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap`1<T>
class CORDL_TYPE MinimumBinaryHeap_1 : public ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap {
public:
// Declarations
using __c__DisplayClass21_0 = ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1___c__DisplayClass21_0<T>;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Min)) T  Min;

/// @brief Field <Count>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field m_Comparer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Comparer, put=__cordl_internal_set_m_Comparer)) ::System::Collections::Generic::IComparer_1<T>*  m_Comparer;

/// @brief Field m_HeapArray, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HeapArray, put=__cordl_internal_set_m_HeapArray)) ::ArrayW<T,::Array<T>*>  m_HeapArray;

/// @brief Field m_Lock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Lock, put=__cordl_internal_set_m_Lock)) ::System::Object*  m_Lock;

/// @brief Field m_MinimumCapacity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumCapacity, put=__cordl_internal_set_m_MinimumCapacity)) int32_t  m_MinimumCapacity;

/// @brief Method DecreaseHeapCapacityWhenSpare, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DecreaseHeapCapacityWhenSpare() ;

/// @brief Method ExtractMin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T ExtractMin() ;

/// @brief Method GetLeftChildIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetLeftChildIndex(int32_t  index) ;

/// @brief Method GetParentIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetParentIndex(int32_t  index) ;

/// @brief Method GetRightChildIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetRightChildIndex(int32_t  index) ;

/// @brief Method IncreaseHeapCapacityWhenFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void IncreaseHeapCapacityWhenFull() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  item) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Insert(T  item) ;

/// @brief Method MinHeapify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MinHeapify() ;

static inline ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>* New_ctor(::System::Collections::Generic::ICollection_1<T>*  collection, ::System::Collections::Generic::IComparer_1<T>*  comparer, int32_t  minimumCapacity) ;

static inline ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<T>* New_ctor(::System::Collections::Generic::IComparer_1<T>*  comparer, int32_t  minimumCapacity) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(T  item) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Swap(::ByRef<T>  lhs, ::ByRef<T>  rhs) ;

/// @brief Method <MinHeapify>g__UpdateSmallestIfCandidateIsSmaller|21_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _MinHeapify_g__UpdateSmallestIfCandidateIsSmaller_21_1(int32_t  candidate, ::ByRef<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1___c__DisplayClass21_0<T>>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method <MinHeapify>g__UpdateSmallestIndex|21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _MinHeapify_g__UpdateSmallestIndex_21_0(::ByRef<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1___c__DisplayClass21_0<T>>  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::System::Collections::Generic::IComparer_1<T>* const& __cordl_internal_get_m_Comparer() const;

constexpr ::System::Collections::Generic::IComparer_1<T>*& __cordl_internal_get_m_Comparer() ;

constexpr ::ArrayW<T,::Array<T>*> const& __cordl_internal_get_m_HeapArray() const;

constexpr ::ArrayW<T,::Array<T>*>& __cordl_internal_get_m_HeapArray() ;

constexpr ::System::Object* const& __cordl_internal_get_m_Lock() const;

constexpr ::System::Object*& __cordl_internal_get_m_Lock() ;

constexpr int32_t const& __cordl_internal_get_m_MinimumCapacity() const;

constexpr int32_t& __cordl_internal_get_m_MinimumCapacity() ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_m_Comparer(::System::Collections::Generic::IComparer_1<T>*  value) ;

constexpr void __cordl_internal_set_m_HeapArray(::ArrayW<T,::Array<T>*>  value) ;

constexpr void __cordl_internal_set_m_Lock(::System::Object*  value) ;

constexpr void __cordl_internal_set_m_MinimumCapacity(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::ICollection_1<T>*  collection, ::System::Collections::Generic::IComparer_1<T>*  comparer, int32_t  minimumCapacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IComparer_1<T>*  comparer, int32_t  minimumCapacity) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Min() ;

/// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinimumBinaryHeap_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinimumBinaryHeap_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinimumBinaryHeap_1(MinimumBinaryHeap_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinimumBinaryHeap_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinimumBinaryHeap_1(MinimumBinaryHeap_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12446};

/// @brief Field m_Lock, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___m_Lock;

/// @brief Field m_Comparer, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IComparer_1<T>*  ___m_Comparer;

/// @brief Field m_MinimumCapacity, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_MinimumCapacity;

/// @brief Field m_HeapArray, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  ___m_HeapArray;

/// @brief Field <Count>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Scheduler::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1, "Unity.Services.Core.Scheduler.Internal", "MinimumBinaryHeap`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1___c__DisplayClass21_0, "Unity.Services.Core.Scheduler.Internal", "MinimumBinaryHeap`1/<>c__DisplayClass21_0");

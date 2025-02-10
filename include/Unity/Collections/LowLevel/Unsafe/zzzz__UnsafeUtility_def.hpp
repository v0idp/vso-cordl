#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeUtility)
namespace System {
struct IntPtr;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct UnsafeUtility_AlignOfHelper_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct LeakCategory;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeUtility;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct UnsafeUtility_AlignOfHelper_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1);
// Dependencies 
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<T>
struct CORDL_TYPE UnsafeUtility_AlignOfHelper_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtility_AlignOfHelper_1() ;

// Ctor Parameters [CppParam { name: "dummy", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: None }]
constexpr UnsafeUtility_AlignOfHelper_1(uint8_t  dummy, T  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field dummy, offset: 0x0, size: 0x1, def value: None
 uint8_t  dummy;

/// @brief Field data, offset: 0x8, size: 0x8, def value: None
 T  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
class CORDL_TYPE UnsafeUtility : public ::System::Object {
public:
// Declarations
template<typename T>
using AlignOfHelper_1 = ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1<T>;

/// @brief Method AddressOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::cordl_internals::Ptr<void> AddressOf(::ByRef<T>  output) ;

/// @brief Method AlignOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t AlignOf() ;

/// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U,typename T>
static inline ::ByRef<T> As(::ByRef<U>  from) ;

/// @brief Method AsRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ByRef<T> AsRef(::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method EnumEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool EnumEquals(T  lhs, T  rhs) ;

/// @brief Method EnumToInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t EnumToInt(T  enumValue) ;

/// @brief Method Free, addr 0x2f5c220, size 0x44, virtual false, abstract: false, final false
static inline void Free(::cordl_internals::Ptr<void>  memory, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method FreeTracked, addr 0x2f5bed0, size 0x44, virtual false, abstract: false, final false
static inline void FreeTracked(::cordl_internals::Ptr<void>  memory, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method InternalEnumToInt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void InternalEnumToInt(::ByRef<T>  enumValue, ::ByRef<int32_t>  intValue) ;

/// @brief Method LeakErase, addr 0x2f5c12c, size 0x44, virtual false, abstract: false, final false
static inline int32_t LeakErase(::System::IntPtr  handle, ::Unity::Collections::LeakCategory  category) ;

/// @brief Method Malloc, addr 0x2f5c1cc, size 0x54, virtual false, abstract: false, final false
static inline ::cordl_internals::Ptr<void> Malloc(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method MallocTracked, addr 0x2f5c170, size 0x5c, virtual false, abstract: false, final false
static inline ::cordl_internals::Ptr<void> MallocTracked(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator, int32_t  callstacksToSkip) ;

/// @brief Method MemClear, addr 0x2f5c380, size 0x48, virtual false, abstract: false, final false
static inline void MemClear(::cordl_internals::Ptr<void>  destination, int64_t  size) ;

/// @brief Method MemCmp, addr 0x2f5c3c8, size 0x54, virtual false, abstract: false, final false
static inline int32_t MemCmp(::cordl_internals::Ptr<void>  ptr1, ::cordl_internals::Ptr<void>  ptr2, int64_t  size) ;

/// @brief Method MemCpy, addr 0x2f5bca0, size 0x54, virtual false, abstract: false, final false
static inline void MemCpy(::cordl_internals::Ptr<void>  destination, ::cordl_internals::Ptr<void>  source, int64_t  size) ;

/// @brief Method MemCpyStride, addr 0x2f5c264, size 0x74, virtual false, abstract: false, final false
static inline void MemCpyStride(::cordl_internals::Ptr<void>  destination, int32_t  destinationStride, ::cordl_internals::Ptr<void>  source, int32_t  sourceStride, int32_t  elementSize, int32_t  count) ;

/// @brief Method MemMove, addr 0x2f5c2d8, size 0x54, virtual false, abstract: false, final false
static inline void MemMove(::cordl_internals::Ptr<void>  destination, ::cordl_internals::Ptr<void>  source, int64_t  size) ;

/// @brief Method MemSet, addr 0x2f5c32c, size 0x54, virtual false, abstract: false, final false
static inline void MemSet(::cordl_internals::Ptr<void>  destination, uint8_t  value, int64_t  size) ;

/// @brief Method ReadArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ReadArrayElement(::cordl_internals::Ptr<void>  source, int32_t  index) ;

/// @brief Method ReadArrayElementWithStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ReadArrayElementWithStride(::cordl_internals::Ptr<void>  source, int32_t  index, int32_t  stride) ;

/// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t SizeOf() ;

/// @brief Method WriteArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteArrayElement(::cordl_internals::Ptr<void>  destination, int32_t  index, T  value) ;

/// @brief Method WriteArrayElementWithStride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void WriteArrayElementWithStride(::cordl_internals::Ptr<void>  destination, int32_t  index, int32_t  stride, T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeUtility(UnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeUtility(UnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8374};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility/AlignOfHelper`1");

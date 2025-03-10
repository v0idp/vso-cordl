#pragma once
// IWYU pragma private; include "System/Collections/Generic/ValueListBuilder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Span_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueListBuilder_1)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
struct ValueListBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::ValueListBuilder_1);
// Dependencies System.Span`1<T>
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Collections.Generic.ValueListBuilder`1<T>
struct CORDL_TYPE ValueListBuilder_1 {
public:
// Declarations
 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Append(T  item) ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<T> AsSpan() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Grow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Grow() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Span_1<T>  initialSpan) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

// Ctor Parameters []
// @brief default ctor
constexpr ValueListBuilder_1() ;

// Ctor Parameters [CppParam { name: "_span", ty: "::System::Span_1<T>", modifiers: "", def_value: None }, CppParam { name: "_arrayFromPool", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueListBuilder_1(::System::Span_1<T>  _span, ::ArrayW<T,::Array<T>*>  _arrayFromPool, int32_t  _pos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _span, offset: 0x0, size: 0x10, def value: None
 ::System::Span_1<T>  _span;

/// @brief Field _arrayFromPool, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T,::Array<T>*>  _arrayFromPool;

/// @brief Field _pos, offset: 0x18, size: 0x4, def value: None
 int32_t  _pos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::ValueListBuilder_1, "System.Collections.Generic", "ValueListBuilder`1");

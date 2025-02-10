#pragma once
// IWYU pragma private; include "VROSC/Transpose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntChanger_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Transpose)
namespace VROSC {
class IntField;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class Transpose;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Transpose);
// Dependencies VROSC.IntChanger
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Transpose
class CORDL_TYPE Transpose : public ::VROSC::IntChanger {
public:
// Declarations
/// @brief Field _resetOnNodeEnd, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetOnNodeEnd, put=__cordl_internal_set__resetOnNodeEnd)) bool  _resetOnNodeEnd;

/// @brief Field _transposeAmount, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__transposeAmount, put=__cordl_internal_set__transposeAmount)) ::VROSC::IntField*  _transposeAmount;

/// @brief Field changeAmount, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_changeAmount, put=__cordl_internal_set_changeAmount)) int32_t  changeAmount;

static inline ::VROSC::Transpose* New_ctor() ;

/// @brief Method NodeEnd, addr 0x171b59c, size 0x9c, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method SetValueBySignal, addr 0x171b540, size 0x5c, virtual true, abstract: false, final false
inline void SetValueBySignal(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__resetOnNodeEnd() const;

constexpr bool& __cordl_internal_get__resetOnNodeEnd() ;

constexpr ::VROSC::IntField* const& __cordl_internal_get__transposeAmount() const;

constexpr ::VROSC::IntField*& __cordl_internal_get__transposeAmount() ;

constexpr int32_t const& __cordl_internal_get_changeAmount() const;

constexpr int32_t& __cordl_internal_get_changeAmount() ;

constexpr void __cordl_internal_set__resetOnNodeEnd(bool  value) ;

constexpr void __cordl_internal_set__transposeAmount(::VROSC::IntField*  value) ;

constexpr void __cordl_internal_set_changeAmount(int32_t  value) ;

/// @brief Method .ctor, addr 0x171b638, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Transpose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Transpose", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Transpose(Transpose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Transpose", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Transpose(Transpose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{944};

/// @brief Field _transposeAmount, offset: 0x58, size: 0x8, def value: None
 ::VROSC::IntField*  ____transposeAmount;

/// @brief Field _resetOnNodeEnd, offset: 0x60, size: 0x1, def value: None
 bool  ____resetOnNodeEnd;

/// @brief Field changeAmount, offset: 0x64, size: 0x4, def value: None
 int32_t  ___changeAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Transpose, ____transposeAmount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Transpose, ____resetOnNodeEnd) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Transpose, ___changeAmount) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Transpose, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Transpose);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Transpose*, "VROSC", "Transpose");

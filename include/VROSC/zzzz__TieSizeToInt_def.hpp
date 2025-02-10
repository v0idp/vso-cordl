#pragma once
// IWYU pragma private; include "VROSC/TieSizeToInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TieSizeToInt)
namespace VROSC {
class IntNode;
}
// Forward declare root types
namespace VROSC {
class TieSizeToInt;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TieSizeToInt);
// Dependencies VROSC.Node
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TieSizeToInt
class CORDL_TYPE TieSizeToInt : public ::VROSC::Node {
public:
// Declarations
/// @brief Field _previousValueX, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousValueX, put=__cordl_internal_set__previousValueX)) int32_t  _previousValueX;

/// @brief Field _previousValueY, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousValueY, put=__cordl_internal_set__previousValueY)) int32_t  _previousValueY;

/// @brief Field _previousValueZ, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousValueZ, put=__cordl_internal_set__previousValueZ)) int32_t  _previousValueZ;

/// @brief Field _x, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__x, put=__cordl_internal_set__x)) ::UnityW<::VROSC::IntNode>  _x;

/// @brief Field _y, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__y, put=__cordl_internal_set__y)) ::UnityW<::VROSC::IntNode>  _y;

/// @brief Field _z, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__z, put=__cordl_internal_set__z)) ::UnityW<::VROSC::IntNode>  _z;

static inline ::VROSC::TieSizeToInt* New_ctor() ;

/// @brief Method Start, addr 0x1720654, size 0x2bc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ValueChangedX, addr 0x1720910, size 0xbc, virtual false, abstract: false, final false
inline void ValueChangedX(int32_t  newValue) ;

/// @brief Method ValueChangedY, addr 0x17209cc, size 0xbc, virtual false, abstract: false, final false
inline void ValueChangedY(int32_t  newValue) ;

/// @brief Method ValueChangedZ, addr 0x1720a88, size 0xb8, virtual false, abstract: false, final false
inline void ValueChangedZ(int32_t  newValue) ;

constexpr int32_t const& __cordl_internal_get__previousValueX() const;

constexpr int32_t& __cordl_internal_get__previousValueX() ;

constexpr int32_t const& __cordl_internal_get__previousValueY() const;

constexpr int32_t& __cordl_internal_get__previousValueY() ;

constexpr int32_t const& __cordl_internal_get__previousValueZ() const;

constexpr int32_t& __cordl_internal_get__previousValueZ() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__x() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__x() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__y() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__y() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__z() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__z() ;

constexpr void __cordl_internal_set__previousValueX(int32_t  value) ;

constexpr void __cordl_internal_set__previousValueY(int32_t  value) ;

constexpr void __cordl_internal_set__previousValueZ(int32_t  value) ;

constexpr void __cordl_internal_set__x(::UnityW<::VROSC::IntNode>  value) ;

constexpr void __cordl_internal_set__y(::UnityW<::VROSC::IntNode>  value) ;

constexpr void __cordl_internal_set__z(::UnityW<::VROSC::IntNode>  value) ;

/// @brief Method .ctor, addr 0x1720b40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TieSizeToInt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TieSizeToInt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TieSizeToInt(TieSizeToInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TieSizeToInt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TieSizeToInt(TieSizeToInt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{973};

/// @brief Field _x, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____x;

/// @brief Field _previousValueX, offset: 0x28, size: 0x4, def value: None
 int32_t  ____previousValueX;

/// @brief Field _y, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____y;

/// @brief Field _previousValueY, offset: 0x38, size: 0x4, def value: None
 int32_t  ____previousValueY;

/// @brief Field _z, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____z;

/// @brief Field _previousValueZ, offset: 0x48, size: 0x4, def value: None
 int32_t  ____previousValueZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TieSizeToInt, ____x) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TieSizeToInt, ____previousValueX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TieSizeToInt, ____y) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TieSizeToInt, ____previousValueY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TieSizeToInt, ____z) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TieSizeToInt, ____previousValueZ) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TieSizeToInt, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TieSizeToInt);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TieSizeToInt*, "VROSC", "TieSizeToInt");

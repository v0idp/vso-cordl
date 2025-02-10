#pragma once
// IWYU pragma private; include "VROSC/Rotator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Rotator)
// Forward declare root types
namespace VROSC {
class Rotator;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Rotator);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Rotator
class CORDL_TYPE Rotator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _rotation, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) ::UnityEngine::Vector3  _rotation;

static inline ::VROSC::Rotator* New_ctor() ;

/// @brief Method Update, addr 0x1714efc, size 0x58, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotation() ;

constexpr void __cordl_internal_set__rotation(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1714f54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Rotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Rotator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rotator(Rotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rotator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rotator(Rotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{909};

/// @brief Field _rotation, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Rotator, ____rotation) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Rotator, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Rotator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Rotator*, "VROSC", "Rotator");

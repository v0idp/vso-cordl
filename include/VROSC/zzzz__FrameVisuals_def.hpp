#pragma once
// IWYU pragma private; include "VROSC/FrameVisuals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FrameVisuals)
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace VROSC {
class FrameVisuals;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FrameVisuals);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FrameVisuals
class CORDL_TYPE FrameVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _createdAmount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__createdAmount, put=__cordl_internal_set__createdAmount)) float_t  _createdAmount;

/// @brief Field _propBlock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Method CreateBlock, addr 0x17adf0c, size 0x60, virtual false, abstract: false, final false
inline void CreateBlock() ;

static inline ::VROSC::FrameVisuals* New_ctor() ;

/// @brief Method UpdateCreationAmount, addr 0x17adf6c, size 0x8, virtual false, abstract: false, final false
inline void UpdateCreationAmount(float_t  createdAmount) ;

constexpr float_t const& __cordl_internal_get__createdAmount() const;

constexpr float_t& __cordl_internal_get__createdAmount() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr void __cordl_internal_set__createdAmount(float_t  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0x17adf74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FrameVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FrameVisuals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameVisuals(FrameVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameVisuals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameVisuals(FrameVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1426};

/// @brief Field _propBlock, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

/// @brief Field _createdAmount, offset: 0x28, size: 0x4, def value: None
 float_t  ____createdAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FrameVisuals, ____propBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FrameVisuals, ____createdAmount) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FrameVisuals, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FrameVisuals);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FrameVisuals*, "VROSC", "FrameVisuals");

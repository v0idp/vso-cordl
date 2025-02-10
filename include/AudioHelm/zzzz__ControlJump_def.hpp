#pragma once
// IWYU pragma private; include "AudioHelm/ControlJump.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControlJump)
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace AudioHelm {
class ControlJump;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::ControlJump);
// Dependencies UnityEngine.KeyCode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.ControlJump
class CORDL_TYPE ControlJump : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field jumpForce, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpForce, put=__cordl_internal_set_jumpForce)) float_t  jumpForce;

/// @brief Field key, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::UnityEngine::KeyCode  key;

/// @brief Field surface_normal_, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_surface_normal_, put=__cordl_internal_set_surface_normal_)) ::UnityEngine::Vector3  surface_normal_;

static inline ::AudioHelm::ControlJump* New_ctor() ;

/// @brief Method OnCollisionStay, addr 0x181a014, size 0xa8, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method Update, addr 0x1819f50, size 0xc4, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_jumpForce() const;

constexpr float_t& __cordl_internal_get_jumpForce() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_key() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_key() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_surface_normal_() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_surface_normal_() ;

constexpr void __cordl_internal_set_jumpForce(float_t  value) ;

constexpr void __cordl_internal_set_key(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_surface_normal_(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x181a0bc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlJump() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlJump", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlJump(ControlJump && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlJump", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlJump(ControlJump const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1847};

/// @brief Field jumpForce, offset: 0x20, size: 0x4, def value: None
 float_t  ___jumpForce;

/// @brief Field key, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___key;

/// @brief Field surface_normal_, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___surface_normal_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::ControlJump, ___jumpForce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ControlJump, ___key) == 0x24, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ControlJump, ___surface_normal_) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::ControlJump, 0x38>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::ControlJump);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::ControlJump*, "AudioHelm", "ControlJump");

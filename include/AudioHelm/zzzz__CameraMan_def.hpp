#pragma once
// IWYU pragma private; include "AudioHelm/CameraMan.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CameraMan)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace AudioHelm {
class CameraMan;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::CameraMan);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.CameraMan
class CORDL_TYPE CameraMan : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field diff_, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_diff_, put=__cordl_internal_set_diff_)) ::UnityEngine::Vector3  diff_;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::UnityEngine::Transform>  player;

static inline ::AudioHelm::CameraMan* New_ctor() ;

/// @brief Method Start, addr 0x1819e84, size 0x68, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1819eec, size 0x5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_diff_() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_diff_() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set_diff_(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1819f48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraMan() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraMan", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraMan(CameraMan && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraMan", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraMan(CameraMan const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1846};

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___player;

/// @brief Field diff_, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___diff_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::CameraMan, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::CameraMan, ___diff_) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::CameraMan, 0x38>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::CameraMan);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::CameraMan*, "AudioHelm", "CameraMan");

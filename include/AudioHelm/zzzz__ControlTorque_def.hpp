#pragma once
// IWYU pragma private; include "AudioHelm/ControlTorque.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControlTorque)
// Forward declare root types
namespace AudioHelm {
class ControlTorque;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::ControlTorque);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.ControlTorque
class CORDL_TYPE ControlTorque : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field forward, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_forward, put=__cordl_internal_set_forward)) ::UnityEngine::Vector3  forward;

/// @brief Field maxAngularVelocity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAngularVelocity, put=__cordl_internal_set_maxAngularVelocity)) float_t  maxAngularVelocity;

/// @brief Field right, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_right, put=__cordl_internal_set_right)) ::UnityEngine::Vector3  right;

/// @brief Field torque, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_torque, put=__cordl_internal_set_torque)) float_t  torque;

static inline ::AudioHelm::ControlTorque* New_ctor() ;

/// @brief Method Start, addr 0x181a128, size 0x5c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181a184, size 0x234, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_forward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_forward() ;

constexpr float_t const& __cordl_internal_get_maxAngularVelocity() const;

constexpr float_t& __cordl_internal_get_maxAngularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_right() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_right() ;

constexpr float_t const& __cordl_internal_get_torque() const;

constexpr float_t& __cordl_internal_get_torque() ;

constexpr void __cordl_internal_set_forward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxAngularVelocity(float_t  value) ;

constexpr void __cordl_internal_set_right(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_torque(float_t  value) ;

/// @brief Method .ctor, addr 0x181a3b8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlTorque() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlTorque", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlTorque(ControlTorque && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlTorque", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlTorque(ControlTorque const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1848};

/// @brief Field torque, offset: 0x20, size: 0x4, def value: None
 float_t  ___torque;

/// @brief Field maxAngularVelocity, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxAngularVelocity;

/// @brief Field forward, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___forward;

/// @brief Field right, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___right;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::ControlTorque, ___torque) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ControlTorque, ___maxAngularVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ControlTorque, ___forward) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::ControlTorque, ___right) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::ControlTorque, 0x40>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::ControlTorque);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::ControlTorque*, "AudioHelm", "ControlTorque");

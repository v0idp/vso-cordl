#pragma once
// IWYU pragma private; include "AudioHelm/RepetitiveSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RepetitiveSpawner)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace AudioHelm {
class RepetitiveSpawner;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::RepetitiveSpawner);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.RepetitiveSpawner
class CORDL_TYPE RepetitiveSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field model, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_model, put=__cordl_internal_set_model)) ::UnityW<::UnityEngine::Transform>  model;

/// @brief Field progress, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field rate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rate, put=__cordl_internal_set_rate)) float_t  rate;

static inline ::AudioHelm::RepetitiveSpawner* New_ctor() ;

/// @brief Method Spawn, addr 0x181c37c, size 0x16c, virtual false, abstract: false, final false
inline void Spawn() ;

/// @brief Method Update, addr 0x181c4e8, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_model() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_model() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr float_t const& __cordl_internal_get_rate() const;

constexpr float_t& __cordl_internal_get_rate() ;

constexpr void __cordl_internal_set_model(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_rate(float_t  value) ;

/// @brief Method .ctor, addr 0x181c53c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RepetitiveSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RepetitiveSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RepetitiveSpawner(RepetitiveSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RepetitiveSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RepetitiveSpawner(RepetitiveSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1861};

/// @brief Field model, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___model;

/// @brief Field rate, offset: 0x28, size: 0x4, def value: None
 float_t  ___rate;

/// @brief Field progress, offset: 0x2c, size: 0x4, def value: None
 float_t  ___progress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::RepetitiveSpawner, ___model) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::RepetitiveSpawner, ___rate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::RepetitiveSpawner, ___progress) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::RepetitiveSpawner, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::RepetitiveSpawner);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::RepetitiveSpawner*, "AudioHelm", "RepetitiveSpawner");

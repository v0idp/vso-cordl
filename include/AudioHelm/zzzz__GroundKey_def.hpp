#pragma once
// IWYU pragma private; include "AudioHelm/GroundKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GroundKey)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace AudioHelm {
class GroundKey;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::GroundKey);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.GroundKey
class CORDL_TYPE GroundKey : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field keyLight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyLight, put=__cordl_internal_set_keyLight)) ::UnityW<::UnityEngine::Renderer>  keyLight;

/// @brief Field noteOn, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_noteOn, put=__cordl_internal_set_noteOn)) bool  noteOn;

/// @brief Method IsInside, addr 0x181a5a4, size 0x6c, virtual false, abstract: false, final false
inline bool IsInside(::UnityEngine::Vector3  position) ;

/// @brief Method IsOn, addr 0x181a610, size 0x8, virtual false, abstract: false, final false
inline bool IsOn() ;

static inline ::AudioHelm::GroundKey* New_ctor() ;

/// @brief Method SetOn, addr 0x181a618, size 0xc, virtual false, abstract: false, final false
inline void SetOn(bool  isOn) ;

/// @brief Method Update, addr 0x181a624, size 0xac, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_keyLight() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_keyLight() ;

constexpr bool const& __cordl_internal_get_noteOn() const;

constexpr bool& __cordl_internal_get_noteOn() ;

constexpr void __cordl_internal_set_keyLight(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_noteOn(bool  value) ;

/// @brief Method .ctor, addr 0x181a6d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroundKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroundKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroundKey(GroundKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroundKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroundKey(GroundKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1851};

/// @brief Field keyLight, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___keyLight;

/// @brief Field noteOn, offset: 0x28, size: 0x1, def value: None
 bool  ___noteOn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::GroundKey, ___keyLight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::GroundKey, ___noteOn) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::GroundKey, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::GroundKey);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::GroundKey*, "AudioHelm", "GroundKey");

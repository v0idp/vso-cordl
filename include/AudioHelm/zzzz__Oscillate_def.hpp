#pragma once
// IWYU pragma private; include "AudioHelm/Oscillate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Oscillate)
// Forward declare root types
namespace AudioHelm {
class Oscillate;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::Oscillate);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Oscillate
class CORDL_TYPE Oscillate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field freqeuncy, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_freqeuncy, put=__cordl_internal_set_freqeuncy)) float_t  freqeuncy;

/// @brief Field oscillationVector, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_oscillationVector, put=__cordl_internal_set_oscillationVector)) ::UnityEngine::Vector3  oscillationVector;

/// @brief Field progress, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field startingPosition, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingPosition, put=__cordl_internal_set_startingPosition)) ::UnityEngine::Vector3  startingPosition;

static inline ::AudioHelm::Oscillate* New_ctor() ;

/// @brief Method Start, addr 0x181b948, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181b978, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_freqeuncy() const;

constexpr float_t& __cordl_internal_get_freqeuncy() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_oscillationVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_oscillationVector() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingPosition() ;

constexpr void __cordl_internal_set_freqeuncy(float_t  value) ;

constexpr void __cordl_internal_set_oscillationVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_startingPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x181ba08, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Oscillate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Oscillate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Oscillate(Oscillate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Oscillate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Oscillate(Oscillate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1858};

/// @brief Field oscillationVector, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___oscillationVector;

/// @brief Field freqeuncy, offset: 0x2c, size: 0x4, def value: None
 float_t  ___freqeuncy;

/// @brief Field progress, offset: 0x30, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field startingPosition, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::Oscillate, ___oscillationVector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Oscillate, ___freqeuncy) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Oscillate, ___progress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::Oscillate, ___startingPosition) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::Oscillate, 0x40>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::Oscillate);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Oscillate*, "AudioHelm", "Oscillate");

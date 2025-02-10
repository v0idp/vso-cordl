#pragma once
// IWYU pragma private; include "AudioHelm/NoteBlaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBlaster)
namespace AudioHelm {
class HelmController;
}
// Forward declare root types
namespace AudioHelm {
class NoteBlaster;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::NoteBlaster);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.NoteBlaster
class CORDL_TYPE NoteBlaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field max, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) int32_t  max;

/// @brief Field min, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) int32_t  min;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::AudioHelm::HelmController>  player;

static inline ::AudioHelm::NoteBlaster* New_ctor() ;

/// @brief Method Update, addr 0x181b8c8, size 0x6c, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_max() const;

constexpr int32_t& __cordl_internal_get_max() ;

constexpr int32_t const& __cordl_internal_get_min() const;

constexpr int32_t& __cordl_internal_get_min() ;

constexpr ::UnityW<::AudioHelm::HelmController> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::AudioHelm::HelmController>& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set_max(int32_t  value) ;

constexpr void __cordl_internal_set_min(int32_t  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::AudioHelm::HelmController>  value) ;

/// @brief Method .ctor, addr 0x181b934, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBlaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBlaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBlaster(NoteBlaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBlaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBlaster(NoteBlaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1857};

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmController>  ___player;

/// @brief Field min, offset: 0x28, size: 0x4, def value: None
 int32_t  ___min;

/// @brief Field max, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::NoteBlaster, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::NoteBlaster, ___min) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::NoteBlaster, ___max) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::NoteBlaster, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::NoteBlaster);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::NoteBlaster*, "AudioHelm", "NoteBlaster");

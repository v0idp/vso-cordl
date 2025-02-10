#pragma once
// IWYU pragma private; include "AudioHelm/PulseImageOnNote.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PulseImageOnNote)
namespace AudioHelm {
class MaterialPulse;
}
namespace AudioHelm {
class Note;
}
// Forward declare root types
namespace AudioHelm {
class PulseImageOnNote;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::PulseImageOnNote);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.PulseImageOnNote
class CORDL_TYPE PulseImageOnNote : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field images, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_images, put=__cordl_internal_set_images)) ::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*>  images;

/// @brief Field scale, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::ArrayW<int32_t,::Array<int32_t>*>  scale;

/// @brief Field startingNote, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingNote, put=__cordl_internal_set_startingNote)) int32_t  startingNote;

/// @brief Method GetNoteIndex, addr 0x181c200, size 0xa0, virtual false, abstract: false, final false
inline int32_t GetNoteIndex(int32_t  note) ;

static inline ::AudioHelm::PulseImageOnNote* New_ctor() ;

/// @brief Method NoteOn, addr 0x181c2a0, size 0x50, virtual false, abstract: false, final false
inline void NoteOn(::AudioHelm::Note*  note) ;

constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*> const& __cordl_internal_get_images() const;

constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*>& __cordl_internal_get_images() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get_scale() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get_scale() ;

constexpr int32_t const& __cordl_internal_get_startingNote() const;

constexpr int32_t& __cordl_internal_get_startingNote() ;

constexpr void __cordl_internal_set_images(::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*>  value) ;

constexpr void __cordl_internal_set_scale(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set_startingNote(int32_t  value) ;

/// @brief Method .ctor, addr 0x181c2f0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PulseImageOnNote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PulseImageOnNote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PulseImageOnNote(PulseImageOnNote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PulseImageOnNote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PulseImageOnNote(PulseImageOnNote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1860};

/// @brief Field images, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*>  ___images;

/// @brief Field startingNote, offset: 0x28, size: 0x4, def value: None
 int32_t  ___startingNote;

/// @brief Field scale, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::PulseImageOnNote, ___images) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PulseImageOnNote, ___startingNote) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::PulseImageOnNote, ___scale) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::PulseImageOnNote, 0x38>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::PulseImageOnNote);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::PulseImageOnNote*, "AudioHelm", "PulseImageOnNote");

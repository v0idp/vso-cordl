#pragma once
// IWYU pragma private; include "AudioHelm/TriggerVisibleNotes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriggerVisibleNotes)
namespace AudioHelm {
class MaterialOnOff;
}
namespace AudioHelm {
class Note;
}
// Forward declare root types
namespace AudioHelm {
class TriggerVisibleNotes;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::TriggerVisibleNotes);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.TriggerVisibleNotes
class CORDL_TYPE TriggerVisibleNotes : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field images, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_images, put=__cordl_internal_set_images)) ::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*>  images;

/// @brief Field startingNote, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingNote, put=__cordl_internal_set_startingNote)) int32_t  startingNote;

/// @brief Method Clear, addr 0x181d3c4, size 0x50, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetIndex, addr 0x181d2fc, size 0x34, virtual false, abstract: false, final false
inline int32_t GetIndex(::AudioHelm::Note*  note) ;

static inline ::AudioHelm::TriggerVisibleNotes* New_ctor() ;

/// @brief Method NoteOff, addr 0x181d37c, size 0x48, virtual false, abstract: false, final false
inline void NoteOff(::AudioHelm::Note*  note) ;

/// @brief Method NoteOn, addr 0x181d330, size 0x4c, virtual false, abstract: false, final false
inline void NoteOn(::AudioHelm::Note*  note) ;

constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*> const& __cordl_internal_get_images() const;

constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*>& __cordl_internal_get_images() ;

constexpr int32_t const& __cordl_internal_get_startingNote() const;

constexpr int32_t& __cordl_internal_get_startingNote() ;

constexpr void __cordl_internal_set_images(::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*>  value) ;

constexpr void __cordl_internal_set_startingNote(int32_t  value) ;

/// @brief Method .ctor, addr 0x181d414, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerVisibleNotes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerVisibleNotes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerVisibleNotes(TriggerVisibleNotes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerVisibleNotes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerVisibleNotes(TriggerVisibleNotes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1868};

/// @brief Field images, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*>  ___images;

/// @brief Field startingNote, offset: 0x28, size: 0x4, def value: None
 int32_t  ___startingNote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::TriggerVisibleNotes, ___images) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::TriggerVisibleNotes, ___startingNote) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::TriggerVisibleNotes, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::TriggerVisibleNotes);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::TriggerVisibleNotes*, "AudioHelm", "TriggerVisibleNotes");

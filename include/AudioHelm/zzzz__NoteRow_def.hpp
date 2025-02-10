#pragma once
// IWYU pragma private; include "AudioHelm/NoteRow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
CORDL_MODULE_EXPORT(NoteRow)
namespace AudioHelm {
class Note;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace AudioHelm {
class NoteRow;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::NoteRow);
// Dependencies System.Object, UnityEngine.ISerializationCallbackReceiver
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.NoteRow
class CORDL_TYPE NoteRow : public ::System::Object {
public:
// Declarations
/// @brief Field notes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_notes, put=__cordl_internal_set_notes)) ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  notes;

/// @brief Field oldNotes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_oldNotes, put=__cordl_internal_set_oldNotes)) ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  oldNotes;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::AudioHelm::NoteRow* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x1824bfc, size 0x250, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x1824b80, size 0x7c, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& __cordl_internal_get_notes() const;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& __cordl_internal_get_notes() ;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& __cordl_internal_get_oldNotes() const;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& __cordl_internal_get_oldNotes() ;

constexpr void __cordl_internal_set_notes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value) ;

constexpr void __cordl_internal_set_oldNotes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value) ;

/// @brief Method .ctor, addr 0x1824e4c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteRow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteRow(NoteRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteRow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteRow(NoteRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1891};

/// @brief Field notes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  ___notes;

/// @brief Field oldNotes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  ___oldNotes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::NoteRow, ___notes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::NoteRow, ___oldNotes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::NoteRow, 0x20>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::NoteRow);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::NoteRow*, "AudioHelm", "NoteRow");

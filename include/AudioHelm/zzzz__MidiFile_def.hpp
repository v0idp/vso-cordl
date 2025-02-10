#pragma once
// IWYU pragma private; include "AudioHelm/MidiFile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiFile)
namespace AudioHelm {
class MidiFile_MidiData;
}
namespace AudioHelm {
class Note;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class Stream;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace AudioHelm {
class MidiFile;
}
namespace AudioHelm {
class MidiFile_MidiData;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::MidiFile);
MARK_REF_PTR_T(::AudioHelm::MidiFile_MidiData);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.MidiFile/MidiData
class CORDL_TYPE MidiFile_MidiData : public ::System::Object {
public:
// Declarations
/// @brief Field length, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

/// @brief Field notes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_notes, put=__cordl_internal_set_notes)) ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  notes;

static inline ::AudioHelm::MidiFile_MidiData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& __cordl_internal_get_notes() const;

constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& __cordl_internal_get_notes() ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

constexpr void __cordl_internal_set_notes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value) ;

/// @brief Method .ctor, addr 0x1823b4c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiFile_MidiData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiFile_MidiData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiFile_MidiData(MidiFile_MidiData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile_MidiData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiFile_MidiData(MidiFile_MidiData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1885};

/// @brief Field length, offset: 0x10, size: 0x4, def value: None
 int32_t  ___length;

/// @brief Field notes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::AudioHelm::Note*>*  ___notes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::MidiFile_MidiData, ___length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MidiFile_MidiData, ___notes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::MidiFile_MidiData, 0x20>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.MidiFile
class CORDL_TYPE MidiFile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MidiData = ::AudioHelm::MidiFile_MidiData;

/// @brief Field midiData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_midiData, put=__cordl_internal_set_midiData)) ::AudioHelm::MidiFile_MidiData*  midiData;

/// @brief Field midiObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_midiObject, put=__cordl_internal_set_midiObject)) ::UnityW<::UnityEngine::Object>  midiObject;

/// @brief Method LoadMidiData, addr 0x1823afc, size 0x50, virtual false, abstract: false, final false
static inline ::AudioHelm::MidiFile_MidiData* LoadMidiData(::System::IO::Stream*  midiStream) ;

/// @brief Method LoadMidiData, addr 0x1823a8c, size 0x70, virtual false, abstract: false, final false
inline void LoadMidiData(::StringW  filePath) ;

static inline ::AudioHelm::MidiFile* New_ctor() ;

constexpr ::AudioHelm::MidiFile_MidiData* const& __cordl_internal_get_midiData() const;

constexpr ::AudioHelm::MidiFile_MidiData*& __cordl_internal_get_midiData() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_midiObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_midiObject() ;

constexpr void __cordl_internal_set_midiData(::AudioHelm::MidiFile_MidiData*  value) ;

constexpr void __cordl_internal_set_midiObject(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x1823bd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiFile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiFile(MidiFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiFile(MidiFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1886};

/// @brief Field midiObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___midiObject;

/// @brief Field midiData, offset: 0x28, size: 0x8, def value: None
 ::AudioHelm::MidiFile_MidiData*  ___midiData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::MidiFile, ___midiObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MidiFile, ___midiData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::MidiFile, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::MidiFile);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::MidiFile*, "AudioHelm", "MidiFile");
NEED_NO_BOX(::AudioHelm::MidiFile_MidiData);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::MidiFile_MidiData*, "AudioHelm", "MidiFile/MidiData");

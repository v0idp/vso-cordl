#pragma once
// IWYU pragma private; include "VROSC/NoteBoardReciever.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteBoardReciever)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class NoteBoardReciever_Player;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
class NotePlayer;
}
namespace VROSC {
struct PlayData;
}
// Forward declare root types
namespace VROSC {
class NoteBoardReciever;
}
namespace VROSC {
class NoteBoardReciever_Player;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardReciever);
MARK_REF_PTR_T(::VROSC::NoteBoardReciever_Player);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardReciever/Player
class CORDL_TYPE NoteBoardReciever_Player : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentNote, put=set_CurrentNote)) ::VROSC::NoteFieldNoteData*  CurrentNote;

 __declspec(property(get=get_Source)) ::UnityW<::VROSC::NotePlayer>  Source;

/// @brief Field <CurrentNote>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentNote_k__BackingField, put=__cordl_internal_set__CurrentNote_k__BackingField)) ::VROSC::NoteFieldNoteData*  _CurrentNote_k__BackingField;

/// @brief Field <Source>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Source_k__BackingField, put=__cordl_internal_set__Source_k__BackingField)) ::UnityW<::VROSC::NotePlayer>  _Source_k__BackingField;

static inline ::VROSC::NoteBoardReciever_Player* New_ctor(::VROSC::NotePlayer*  source) ;

/// @brief Method Play, addr 0x17b64ac, size 0x98, virtual false, abstract: false, final false
inline void Play(::VROSC::NoteFieldNoteData*  note, ::VROSC::PlayData  playData) ;

/// @brief Method Stop, addr 0x17b6544, size 0x48, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::VROSC::NoteFieldNoteData* const& __cordl_internal_get__CurrentNote_k__BackingField() const;

constexpr ::VROSC::NoteFieldNoteData*& __cordl_internal_get__CurrentNote_k__BackingField() ;

constexpr ::UnityW<::VROSC::NotePlayer> const& __cordl_internal_get__Source_k__BackingField() const;

constexpr ::UnityW<::VROSC::NotePlayer>& __cordl_internal_get__Source_k__BackingField() ;

constexpr void __cordl_internal_set__CurrentNote_k__BackingField(::VROSC::NoteFieldNoteData*  value) ;

constexpr void __cordl_internal_set__Source_k__BackingField(::UnityW<::VROSC::NotePlayer>  value) ;

/// @brief Method .ctor, addr 0x17b63f0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NotePlayer*  source) ;

/// @brief Method get_CurrentNote, addr 0x17b64a4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldNoteData* get_CurrentNote() ;

/// @brief Method get_Source, addr 0x17b6494, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NotePlayer> get_Source() ;

/// @brief Method set_CurrentNote, addr 0x17b649c, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentNote(::VROSC::NoteFieldNoteData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardReciever_Player() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardReciever_Player", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardReciever_Player(NoteBoardReciever_Player && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardReciever_Player", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardReciever_Player(NoteBoardReciever_Player const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1449};

/// @brief Field <Source>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::NotePlayer>  ____Source_k__BackingField;

/// @brief Field <CurrentNote>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::NoteFieldNoteData*  ____CurrentNote_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardReciever_Player, ____Source_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardReciever_Player, ____CurrentNote_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardReciever_Player, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardReciever
class CORDL_TYPE NoteBoardReciever : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Player = ::VROSC::NoteBoardReciever_Player;

/// @brief Field _players, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::System::Collections::Generic::List_1<::VROSC::NoteBoardReciever_Player*>*  _players;

static inline ::VROSC::NoteBoardReciever* New_ctor() ;

/// @brief Method PlayerRegistered, addr 0x17b6248, size 0x1a8, virtual false, abstract: false, final false
inline bool PlayerRegistered(::VROSC::NotePlayer*  source) ;

/// @brief Method RegisterPlayer, addr 0x17b6164, size 0xe4, virtual false, abstract: false, final false
inline void RegisterPlayer(::VROSC::NotePlayer*  source) ;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteBoardReciever_Player*>* const& __cordl_internal_get__players() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteBoardReciever_Player*>*& __cordl_internal_get__players() ;

constexpr void __cordl_internal_set__players(::System::Collections::Generic::List_1<::VROSC::NoteBoardReciever_Player*>*  value) ;

/// @brief Method .ctor, addr 0x17b6418, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardReciever() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardReciever", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardReciever(NoteBoardReciever && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardReciever", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardReciever(NoteBoardReciever const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1450};

/// @brief Field _players, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::NoteBoardReciever_Player*>*  ____players;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardReciever, ____players) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardReciever, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardReciever);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardReciever*, "VROSC", "NoteBoardReciever");
NEED_NO_BOX(::VROSC::NoteBoardReciever_Player);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardReciever_Player*, "VROSC", "NoteBoardReciever/Player");

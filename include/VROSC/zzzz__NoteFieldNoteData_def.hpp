#pragma once
// IWYU pragma private; include "VROSC/NoteFieldNoteData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldNoteData)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace VROSC {
struct PlayData;
}
// Forward declare root types
namespace VROSC {
class NoteFieldNoteData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteFieldNoteData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldNoteData
class CORDL_TYPE NoteFieldNoteData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FieldIndexX, put=set_FieldIndexX)) int32_t  FieldIndexX;

 __declspec(property(get=get_FieldIndexY, put=set_FieldIndexY)) int32_t  FieldIndexY;

 __declspec(property(get=get_FieldIndexZ, put=set_FieldIndexZ)) int32_t  FieldIndexZ;

 __declspec(property(get=get_IsHovering, put=set_IsHovering)) bool  IsHovering;

 __declspec(property(get=get_IsOctave, put=set_IsOctave)) bool  IsOctave;

 __declspec(property(get=get_IsOdd, put=set_IsOdd)) bool  IsOdd;

 __declspec(property(get=get_IsPlaying, put=set_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_MultiNote, put=set_MultiNote)) ::ArrayW<float_t,::Array<float_t>*>  MultiNote;

 __declspec(property(get=get_NoteNumber3D, put=set_NoteNumber3D)) int32_t  NoteNumber3D;

 __declspec(property(get=get_NoteNumberX, put=set_NoteNumberX)) int32_t  NoteNumberX;

 __declspec(property(get=get_NoteNumberY, put=set_NoteNumberY)) int32_t  NoteNumberY;

 __declspec(property(get=get_NoteNumberZ, put=set_NoteNumberZ)) int32_t  NoteNumberZ;

/// @brief Field OnHovering, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHovering, put=__cordl_internal_set_OnHovering)) ::System::Action_2<bool,bool>*  OnHovering;

/// @brief Field OnPlay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlay, put=__cordl_internal_set_OnPlay)) ::System::Action_2<bool,::VROSC::PlayData>*  OnPlay;

/// @brief Field <FieldIndexX>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__FieldIndexX_k__BackingField, put=__cordl_internal_set__FieldIndexX_k__BackingField)) int32_t  _FieldIndexX_k__BackingField;

/// @brief Field <FieldIndexY>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__FieldIndexY_k__BackingField, put=__cordl_internal_set__FieldIndexY_k__BackingField)) int32_t  _FieldIndexY_k__BackingField;

/// @brief Field <FieldIndexZ>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__FieldIndexZ_k__BackingField, put=__cordl_internal_set__FieldIndexZ_k__BackingField)) int32_t  _FieldIndexZ_k__BackingField;

/// @brief Field <IsHovering>k__BackingField, offset 0x2f, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsHovering_k__BackingField, put=__cordl_internal_set__IsHovering_k__BackingField)) bool  _IsHovering_k__BackingField;

/// @brief Field <IsOctave>k__BackingField, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOctave_k__BackingField, put=__cordl_internal_set__IsOctave_k__BackingField)) bool  _IsOctave_k__BackingField;

/// @brief Field <IsOdd>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOdd_k__BackingField, put=__cordl_internal_set__IsOdd_k__BackingField)) bool  _IsOdd_k__BackingField;

/// @brief Field <IsPlaying>k__BackingField, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlaying_k__BackingField, put=__cordl_internal_set__IsPlaying_k__BackingField)) bool  _IsPlaying_k__BackingField;

/// @brief Field <MultiNote>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__MultiNote_k__BackingField, put=__cordl_internal_set__MultiNote_k__BackingField)) ::ArrayW<float_t,::Array<float_t>*>  _MultiNote_k__BackingField;

/// @brief Field <NoteNumber3D>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__NoteNumber3D_k__BackingField, put=__cordl_internal_set__NoteNumber3D_k__BackingField)) int32_t  _NoteNumber3D_k__BackingField;

/// @brief Field <NoteNumberX>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__NoteNumberX_k__BackingField, put=__cordl_internal_set__NoteNumberX_k__BackingField)) int32_t  _NoteNumberX_k__BackingField;

/// @brief Field <NoteNumberY>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__NoteNumberY_k__BackingField, put=__cordl_internal_set__NoteNumberY_k__BackingField)) int32_t  _NoteNumberY_k__BackingField;

/// @brief Field <NoteNumberZ>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__NoteNumberZ_k__BackingField, put=__cordl_internal_set__NoteNumberZ_k__BackingField)) int32_t  _NoteNumberZ_k__BackingField;

static inline ::VROSC::NoteFieldNoteData* New_ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  noteNumberX, int32_t  noteNumberY, int32_t  noteNumberZ, int32_t  noteNumber3D, bool  isOdd, bool  isOctave) ;

/// @brief Method SetHovering, addr 0x17b589c, size 0x28, virtual false, abstract: false, final false
inline void SetHovering(bool  isHovering) ;

/// @brief Method SetMultiNote, addr 0x17b67a8, size 0x38, virtual false, abstract: false, final false
inline void SetMultiNote(int32_t  index, float_t  amount) ;

/// @brief Method SetPlaying, addr 0x17b658c, size 0x24, virtual false, abstract: false, final false
inline void SetPlaying(bool  isPlaying, ::VROSC::PlayData  playData) ;

constexpr ::System::Action_2<bool,bool>* const& __cordl_internal_get_OnHovering() const;

constexpr ::System::Action_2<bool,bool>*& __cordl_internal_get_OnHovering() ;

constexpr ::System::Action_2<bool,::VROSC::PlayData>* const& __cordl_internal_get_OnPlay() const;

constexpr ::System::Action_2<bool,::VROSC::PlayData>*& __cordl_internal_get_OnPlay() ;

constexpr int32_t const& __cordl_internal_get__FieldIndexX_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FieldIndexX_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FieldIndexY_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FieldIndexY_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FieldIndexZ_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FieldIndexZ_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsHovering_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsHovering_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsOctave_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOctave_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsOdd_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOdd_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPlaying_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPlaying_k__BackingField() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__MultiNote_k__BackingField() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__MultiNote_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__NoteNumber3D_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NoteNumber3D_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__NoteNumberX_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NoteNumberX_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__NoteNumberY_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NoteNumberY_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__NoteNumberZ_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NoteNumberZ_k__BackingField() ;

constexpr void __cordl_internal_set_OnHovering(::System::Action_2<bool,bool>*  value) ;

constexpr void __cordl_internal_set_OnPlay(::System::Action_2<bool,::VROSC::PlayData>*  value) ;

constexpr void __cordl_internal_set__FieldIndexX_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FieldIndexY_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FieldIndexZ_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsHovering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsOctave_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsOdd_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsPlaying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MultiNote_k__BackingField(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__NoteNumber3D_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__NoteNumberX_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__NoteNumberY_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__NoteNumberZ_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x17b66e8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z, int32_t  noteNumberX, int32_t  noteNumberY, int32_t  noteNumberZ, int32_t  noteNumber3D, bool  isOdd, bool  isOctave) ;

/// @brief Method get_FieldIndexX, addr 0x17b6618, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FieldIndexX() ;

/// @brief Method get_FieldIndexY, addr 0x17b6628, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FieldIndexY() ;

/// @brief Method get_FieldIndexZ, addr 0x17b6638, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FieldIndexZ() ;

/// @brief Method get_IsHovering, addr 0x17b66c4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHovering() ;

/// @brief Method get_IsOctave, addr 0x17b669c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOctave() ;

/// @brief Method get_IsOdd, addr 0x17b6688, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOdd() ;

/// @brief Method get_IsPlaying, addr 0x17b66b0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_MultiNote, addr 0x17b66d8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_MultiNote() ;

/// @brief Method get_NoteNumber3D, addr 0x17b6678, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NoteNumber3D() ;

/// @brief Method get_NoteNumberX, addr 0x17b6648, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NoteNumberX() ;

/// @brief Method get_NoteNumberY, addr 0x17b6658, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NoteNumberY() ;

/// @brief Method get_NoteNumberZ, addr 0x17b6668, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NoteNumberZ() ;

/// @brief Method set_FieldIndexX, addr 0x17b6620, size 0x8, virtual false, abstract: false, final false
inline void set_FieldIndexX(int32_t  value) ;

/// @brief Method set_FieldIndexY, addr 0x17b6630, size 0x8, virtual false, abstract: false, final false
inline void set_FieldIndexY(int32_t  value) ;

/// @brief Method set_FieldIndexZ, addr 0x17b6640, size 0x8, virtual false, abstract: false, final false
inline void set_FieldIndexZ(int32_t  value) ;

/// @brief Method set_IsHovering, addr 0x17b66cc, size 0xc, virtual false, abstract: false, final false
inline void set_IsHovering(bool  value) ;

/// @brief Method set_IsOctave, addr 0x17b66a4, size 0xc, virtual false, abstract: false, final false
inline void set_IsOctave(bool  value) ;

/// @brief Method set_IsOdd, addr 0x17b6690, size 0xc, virtual false, abstract: false, final false
inline void set_IsOdd(bool  value) ;

/// @brief Method set_IsPlaying, addr 0x17b66b8, size 0xc, virtual false, abstract: false, final false
inline void set_IsPlaying(bool  value) ;

/// @brief Method set_MultiNote, addr 0x17b66e0, size 0x8, virtual false, abstract: false, final false
inline void set_MultiNote(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method set_NoteNumber3D, addr 0x17b6680, size 0x8, virtual false, abstract: false, final false
inline void set_NoteNumber3D(int32_t  value) ;

/// @brief Method set_NoteNumberX, addr 0x17b6650, size 0x8, virtual false, abstract: false, final false
inline void set_NoteNumberX(int32_t  value) ;

/// @brief Method set_NoteNumberY, addr 0x17b6660, size 0x8, virtual false, abstract: false, final false
inline void set_NoteNumberY(int32_t  value) ;

/// @brief Method set_NoteNumberZ, addr 0x17b6670, size 0x8, virtual false, abstract: false, final false
inline void set_NoteNumberZ(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldNoteData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldNoteData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldNoteData(NoteFieldNoteData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldNoteData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldNoteData(NoteFieldNoteData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1452};

/// @brief Field <FieldIndexX>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____FieldIndexX_k__BackingField;

/// @brief Field <FieldIndexY>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____FieldIndexY_k__BackingField;

/// @brief Field <FieldIndexZ>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____FieldIndexZ_k__BackingField;

/// @brief Field <NoteNumberX>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____NoteNumberX_k__BackingField;

/// @brief Field <NoteNumberY>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____NoteNumberY_k__BackingField;

/// @brief Field <NoteNumberZ>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____NoteNumberZ_k__BackingField;

/// @brief Field <NoteNumber3D>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____NoteNumber3D_k__BackingField;

/// @brief Field <IsOdd>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____IsOdd_k__BackingField;

/// @brief Field <IsOctave>k__BackingField, offset: 0x2d, size: 0x1, def value: None
 bool  ____IsOctave_k__BackingField;

/// @brief Field <IsPlaying>k__BackingField, offset: 0x2e, size: 0x1, def value: None
 bool  ____IsPlaying_k__BackingField;

/// @brief Field <IsHovering>k__BackingField, offset: 0x2f, size: 0x1, def value: None
 bool  ____IsHovering_k__BackingField;

/// @brief Field OnPlay, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<bool,::VROSC::PlayData>*  ___OnPlay;

/// @brief Field OnHovering, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<bool,bool>*  ___OnHovering;

/// @brief Field <MultiNote>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____MultiNote_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldNoteData, ____FieldIndexX_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____FieldIndexY_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____FieldIndexZ_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____NoteNumberX_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____NoteNumberY_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____NoteNumberZ_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____NoteNumber3D_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____IsOdd_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____IsOctave_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____IsPlaying_k__BackingField) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____IsHovering_k__BackingField) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ___OnPlay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ___OnHovering) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldNoteData, ____MultiNote_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldNoteData, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteFieldNoteData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldNoteData*, "VROSC", "NoteFieldNoteData");

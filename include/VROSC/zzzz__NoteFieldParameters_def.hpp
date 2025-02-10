#pragma once
// IWYU pragma private; include "VROSC/NoteFieldParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldParameters)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
struct NoteBoard_Axis;
}
namespace VROSC {
class NoteBoard_NoteAxis;
}
namespace VROSC {
class NoteFieldParameters_Axis;
}
namespace VROSC {
struct Scale;
}
// Forward declare root types
namespace VROSC {
class NoteFieldParameters;
}
namespace VROSC {
class NoteFieldParameters_Axis;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteFieldParameters);
MARK_REF_PTR_T(::VROSC::NoteFieldParameters_Axis);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldParameters/Axis
class CORDL_TYPE NoteFieldParameters_Axis : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FieldCount, put=set_FieldCount)) int32_t  FieldCount;

 __declspec(property(get=get_ValidNotes, put=set_ValidNotes)) ::System::Collections::Generic::List_1<int32_t>*  ValidNotes;

/// @brief Field <FieldCount>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__FieldCount_k__BackingField, put=__cordl_internal_set__FieldCount_k__BackingField)) int32_t  _FieldCount_k__BackingField;

/// @brief Field <ValidNotes>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ValidNotes_k__BackingField, put=__cordl_internal_set__ValidNotes_k__BackingField)) ::System::Collections::Generic::List_1<int32_t>*  _ValidNotes_k__BackingField;

/// @brief Method FindValidNotes, addr 0x17b6e2c, size 0x268, virtual false, abstract: false, final false
inline void FindValidNotes(::VROSC::NoteBoard_NoteAxis*  noteAxis) ;

static inline ::VROSC::NoteFieldParameters_Axis* New_ctor(int32_t  fieldCount) ;

/// @brief Method SetCount, addr 0x17b6d08, size 0x8, virtual false, abstract: false, final false
inline void SetCount(int32_t  count) ;

/// @brief Method SetValidNotes, addr 0x17b6d44, size 0x8, virtual false, abstract: false, final false
inline void SetValidNotes(::System::Collections::Generic::List_1<int32_t>*  validNotes) ;

constexpr int32_t const& __cordl_internal_get__FieldCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FieldCount_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__ValidNotes_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__ValidNotes_k__BackingField() ;

constexpr void __cordl_internal_set__FieldCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ValidNotes_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x17b6afc, size 0x88, virtual false, abstract: false, final false
inline void _ctor(int32_t  fieldCount) ;

/// @brief Method get_FieldCount, addr 0x17b71e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FieldCount() ;

/// @brief Method get_ValidNotes, addr 0x17b71f8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_ValidNotes() ;

/// @brief Method set_FieldCount, addr 0x17b71e0, size 0x8, virtual false, abstract: false, final false
inline void set_FieldCount(int32_t  value) ;

/// @brief Method set_ValidNotes, addr 0x17b71f0, size 0x8, virtual false, abstract: false, final false
inline void set_ValidNotes(::System::Collections::Generic::List_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldParameters_Axis() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldParameters_Axis", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldParameters_Axis(NoteFieldParameters_Axis && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldParameters_Axis", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldParameters_Axis(NoteFieldParameters_Axis const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1454};

/// @brief Field <FieldCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____FieldCount_k__BackingField;

/// @brief Field <ValidNotes>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____ValidNotes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldParameters_Axis, ____FieldCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters_Axis, ____ValidNotes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldParameters_Axis, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.NoteBoard::Axis, VROSC.Scale
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldParameters
class CORDL_TYPE NoteFieldParameters : public ::System::Object {
public:
// Declarations
using Axis = ::VROSC::NoteFieldParameters_Axis;

 __declspec(property(get=get_NumberOfFields, put=set_NumberOfFields)) int32_t  NumberOfFields;

 __declspec(property(get=get_PrimaryAxis, put=set_PrimaryAxis)) ::VROSC::NoteBoard_Axis  PrimaryAxis;

 __declspec(property(get=get_PrimaryNoteList, put=set_PrimaryNoteList)) ::System::Collections::Generic::List_1<int32_t>*  PrimaryNoteList;

 __declspec(property(get=get_PrimaryScale, put=set_PrimaryScale)) ::VROSC::Scale  PrimaryScale;

 __declspec(property(get=get_SecondaryAxisSteps, put=set_SecondaryAxisSteps)) int32_t  SecondaryAxisSteps;

 __declspec(property(get=get_TertiaryAxisSteps, put=set_TertiaryAxisSteps)) int32_t  TertiaryAxisSteps;

 __declspec(property(get=get_X, put=set_X)) ::VROSC::NoteFieldParameters_Axis*  X;

 __declspec(property(get=get_Y, put=set_Y)) ::VROSC::NoteFieldParameters_Axis*  Y;

 __declspec(property(get=get_Z, put=set_Z)) ::VROSC::NoteFieldParameters_Axis*  Z;

/// @brief Field <NumberOfFields>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__NumberOfFields_k__BackingField, put=__cordl_internal_set__NumberOfFields_k__BackingField)) int32_t  _NumberOfFields_k__BackingField;

/// @brief Field <PrimaryAxis>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__PrimaryAxis_k__BackingField, put=__cordl_internal_set__PrimaryAxis_k__BackingField)) ::VROSC::NoteBoard_Axis  _PrimaryAxis_k__BackingField;

/// @brief Field <PrimaryNoteList>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PrimaryNoteList_k__BackingField, put=__cordl_internal_set__PrimaryNoteList_k__BackingField)) ::System::Collections::Generic::List_1<int32_t>*  _PrimaryNoteList_k__BackingField;

/// @brief Field <PrimaryScale>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__PrimaryScale_k__BackingField, put=__cordl_internal_set__PrimaryScale_k__BackingField)) ::VROSC::Scale  _PrimaryScale_k__BackingField;

/// @brief Field <SecondaryAxisSteps>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__SecondaryAxisSteps_k__BackingField, put=__cordl_internal_set__SecondaryAxisSteps_k__BackingField)) int32_t  _SecondaryAxisSteps_k__BackingField;

/// @brief Field <TertiaryAxisSteps>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__TertiaryAxisSteps_k__BackingField, put=__cordl_internal_set__TertiaryAxisSteps_k__BackingField)) int32_t  _TertiaryAxisSteps_k__BackingField;

/// @brief Field <X>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__X_k__BackingField, put=__cordl_internal_set__X_k__BackingField)) ::VROSC::NoteFieldParameters_Axis*  _X_k__BackingField;

/// @brief Field <Y>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Y_k__BackingField, put=__cordl_internal_set__Y_k__BackingField)) ::VROSC::NoteFieldParameters_Axis*  _Y_k__BackingField;

/// @brief Field <Z>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Z_k__BackingField, put=__cordl_internal_set__Z_k__BackingField)) ::VROSC::NoteFieldParameters_Axis*  _Z_k__BackingField;

/// @brief Method GetTransposedNote, addr 0x17b6888, size 0xc8, virtual false, abstract: false, final false
inline int32_t GetTransposedNote(int32_t  primaryAxisCurrentValue, int32_t  secondaryAxisCurrentValue, int32_t  tertiaryAxisCurrentValue) ;

static inline ::VROSC::NoteFieldParameters* New_ctor(::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  noteAxes) ;

static inline ::VROSC::NoteFieldParameters* New_ctor(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method SetFieldCount, addr 0x17b6cc8, size 0x40, virtual false, abstract: false, final false
inline void SetFieldCount(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method SetPriorityOfAxes, addr 0x17b7094, size 0x14c, virtual false, abstract: false, final false
inline void SetPriorityOfAxes(::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  noteAxes, ::VROSC::NoteBoard_Axis  primaryAxis) ;

/// @brief Method SetPriorityOfAxes, addr 0x17b6d4c, size 0x48, virtual false, abstract: false, final false
inline void SetPriorityOfAxes(::VROSC::NoteBoard_Axis  primaryAxis, ::VROSC::Scale  primaryScale, int32_t  secondaryAxisSteps, int32_t  tertiaryAxisSteps) ;

/// @brief Method SetValidNotes, addr 0x17b6d94, size 0x98, virtual false, abstract: false, final false
inline void SetValidNotes(::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  noteAxes) ;

/// @brief Method SetValidNotes, addr 0x17b6d10, size 0x34, virtual false, abstract: false, final false
inline void SetValidNotes(::System::Collections::Generic::List_1<int32_t>*  validNotesX, ::System::Collections::Generic::List_1<int32_t>*  validNotesY, ::System::Collections::Generic::List_1<int32_t>*  validNotesZ) ;

constexpr int32_t const& __cordl_internal_get__NumberOfFields_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NumberOfFields_k__BackingField() ;

constexpr ::VROSC::NoteBoard_Axis const& __cordl_internal_get__PrimaryAxis_k__BackingField() const;

constexpr ::VROSC::NoteBoard_Axis& __cordl_internal_get__PrimaryAxis_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__PrimaryNoteList_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__PrimaryNoteList_k__BackingField() ;

constexpr ::VROSC::Scale const& __cordl_internal_get__PrimaryScale_k__BackingField() const;

constexpr ::VROSC::Scale& __cordl_internal_get__PrimaryScale_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SecondaryAxisSteps_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SecondaryAxisSteps_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TertiaryAxisSteps_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TertiaryAxisSteps_k__BackingField() ;

constexpr ::VROSC::NoteFieldParameters_Axis* const& __cordl_internal_get__X_k__BackingField() const;

constexpr ::VROSC::NoteFieldParameters_Axis*& __cordl_internal_get__X_k__BackingField() ;

constexpr ::VROSC::NoteFieldParameters_Axis* const& __cordl_internal_get__Y_k__BackingField() const;

constexpr ::VROSC::NoteFieldParameters_Axis*& __cordl_internal_get__Y_k__BackingField() ;

constexpr ::VROSC::NoteFieldParameters_Axis* const& __cordl_internal_get__Z_k__BackingField() const;

constexpr ::VROSC::NoteFieldParameters_Axis*& __cordl_internal_get__Z_k__BackingField() ;

constexpr void __cordl_internal_set__NumberOfFields_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__PrimaryAxis_k__BackingField(::VROSC::NoteBoard_Axis  value) ;

constexpr void __cordl_internal_set__PrimaryNoteList_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__PrimaryScale_k__BackingField(::VROSC::Scale  value) ;

constexpr void __cordl_internal_set__SecondaryAxisSteps_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TertiaryAxisSteps_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__X_k__BackingField(::VROSC::NoteFieldParameters_Axis*  value) ;

constexpr void __cordl_internal_set__Y_k__BackingField(::VROSC::NoteFieldParameters_Axis*  value) ;

constexpr void __cordl_internal_set__Z_k__BackingField(::VROSC::NoteFieldParameters_Axis*  value) ;

/// @brief Method .ctor, addr 0x17b6b84, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::VROSC::NoteBoard_NoteAxis*,::Array<::VROSC::NoteBoard_NoteAxis*>*>  noteAxes) ;

/// @brief Method .ctor, addr 0x17b6a40, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method get_NumberOfFields, addr 0x17b69e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NumberOfFields() ;

/// @brief Method get_PrimaryAxis, addr 0x17b6a08, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteBoard_Axis get_PrimaryAxis() ;

/// @brief Method get_PrimaryNoteList, addr 0x17b69f8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_PrimaryNoteList() ;

/// @brief Method get_PrimaryScale, addr 0x17b6a18, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Scale get_PrimaryScale() ;

/// @brief Method get_SecondaryAxisSteps, addr 0x17b6a28, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SecondaryAxisSteps() ;

/// @brief Method get_TertiaryAxisSteps, addr 0x17b6a38, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TertiaryAxisSteps() ;

/// @brief Method get_X, addr 0x17b69b8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldParameters_Axis* get_X() ;

/// @brief Method get_Y, addr 0x17b69c8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldParameters_Axis* get_Y() ;

/// @brief Method get_Z, addr 0x17b69d8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldParameters_Axis* get_Z() ;

/// @brief Method set_NumberOfFields, addr 0x17b69e0, size 0x8, virtual false, abstract: false, final false
inline void set_NumberOfFields(int32_t  value) ;

/// @brief Method set_PrimaryAxis, addr 0x17b6a00, size 0x8, virtual false, abstract: false, final false
inline void set_PrimaryAxis(::VROSC::NoteBoard_Axis  value) ;

/// @brief Method set_PrimaryNoteList, addr 0x17b69f0, size 0x8, virtual false, abstract: false, final false
inline void set_PrimaryNoteList(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method set_PrimaryScale, addr 0x17b6a10, size 0x8, virtual false, abstract: false, final false
inline void set_PrimaryScale(::VROSC::Scale  value) ;

/// @brief Method set_SecondaryAxisSteps, addr 0x17b6a20, size 0x8, virtual false, abstract: false, final false
inline void set_SecondaryAxisSteps(int32_t  value) ;

/// @brief Method set_TertiaryAxisSteps, addr 0x17b6a30, size 0x8, virtual false, abstract: false, final false
inline void set_TertiaryAxisSteps(int32_t  value) ;

/// @brief Method set_X, addr 0x17b69b0, size 0x8, virtual false, abstract: false, final false
inline void set_X(::VROSC::NoteFieldParameters_Axis*  value) ;

/// @brief Method set_Y, addr 0x17b69c0, size 0x8, virtual false, abstract: false, final false
inline void set_Y(::VROSC::NoteFieldParameters_Axis*  value) ;

/// @brief Method set_Z, addr 0x17b69d0, size 0x8, virtual false, abstract: false, final false
inline void set_Z(::VROSC::NoteFieldParameters_Axis*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldParameters(NoteFieldParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldParameters(NoteFieldParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1455};

/// @brief Field <X>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VROSC::NoteFieldParameters_Axis*  ____X_k__BackingField;

/// @brief Field <Y>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::NoteFieldParameters_Axis*  ____Y_k__BackingField;

/// @brief Field <Z>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::VROSC::NoteFieldParameters_Axis*  ____Z_k__BackingField;

/// @brief Field <NumberOfFields>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____NumberOfFields_k__BackingField;

/// @brief Field <PrimaryNoteList>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____PrimaryNoteList_k__BackingField;

/// @brief Field <PrimaryAxis>k__BackingField, offset: 0x38, size: 0x4, def value: None
 ::VROSC::NoteBoard_Axis  ____PrimaryAxis_k__BackingField;

/// @brief Field <PrimaryScale>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 ::VROSC::Scale  ____PrimaryScale_k__BackingField;

/// @brief Field <SecondaryAxisSteps>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____SecondaryAxisSteps_k__BackingField;

/// @brief Field <TertiaryAxisSteps>k__BackingField, offset: 0x44, size: 0x4, def value: None
 int32_t  ____TertiaryAxisSteps_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldParameters, ____X_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____Y_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____Z_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____NumberOfFields_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____PrimaryNoteList_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____PrimaryAxis_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____PrimaryScale_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____SecondaryAxisSteps_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldParameters, ____TertiaryAxisSteps_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldParameters, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteFieldParameters);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldParameters*, "VROSC", "NoteFieldParameters");
NEED_NO_BOX(::VROSC::NoteFieldParameters_Axis);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldParameters_Axis*, "VROSC", "NoteFieldParameters/Axis");

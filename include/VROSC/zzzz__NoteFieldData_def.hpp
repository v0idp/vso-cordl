#pragma once
// IWYU pragma private; include "VROSC/NoteFieldData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
class NoteFieldParameters;
}
// Forward declare root types
namespace VROSC {
class NoteFieldData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteFieldData);
// Dependencies System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldData
class CORDL_TYPE NoteFieldData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FieldSize, put=set_FieldSize)) ::UnityEngine::Vector3  FieldSize;

 __declspec(property(get=get_XFields, put=set_XFields)) int32_t  XFields;

 __declspec(property(get=get_YFields, put=set_YFields)) int32_t  YFields;

 __declspec(property(get=get_ZFields, put=set_ZFields)) int32_t  ZFields;

/// @brief Field <FieldSize>k__BackingField, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get__FieldSize_k__BackingField, put=__cordl_internal_set__FieldSize_k__BackingField)) ::UnityEngine::Vector3  _FieldSize_k__BackingField;

/// @brief Field <XFields>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__XFields_k__BackingField, put=__cordl_internal_set__XFields_k__BackingField)) int32_t  _XFields_k__BackingField;

/// @brief Field <YFields>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__YFields_k__BackingField, put=__cordl_internal_set__YFields_k__BackingField)) int32_t  _YFields_k__BackingField;

/// @brief Field <ZFields>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__ZFields_k__BackingField, put=__cordl_internal_set__ZFields_k__BackingField)) int32_t  _ZFields_k__BackingField;

/// @brief Field _noteFieldArray, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteFieldArray, put=__cordl_internal_set__noteFieldArray)) ::System::Object*  _noteFieldArray;

/// @brief Field _noteFieldList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteFieldList, put=__cordl_internal_set__noteFieldList)) ::System::Collections::Generic::List_1<::VROSC::NoteFieldNoteData*>*  _noteFieldList;

/// @brief Method GetNoteBoardNote, addr 0x17b53ec, size 0x98, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldNoteData* GetNoteBoardNote(::UnityEngine::Vector3  normalizedPoint) ;

/// @brief Method GetNoteBoardNote, addr 0x17b6950, size 0x60, virtual true, abstract: false, final false
inline ::VROSC::NoteFieldNoteData* GetNoteBoardNote(int32_t  x, int32_t  y, int32_t  z) ;

static inline ::VROSC::NoteFieldData* New_ctor(::VROSC::NoteFieldParameters*  parameters) ;

/// @brief Method SetFieldSize, addr 0x17b6828, size 0x60, virtual false, abstract: false, final false
inline void SetFieldSize(::VROSC::NoteFieldParameters*  parameters) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__FieldSize_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__FieldSize_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__XFields_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__XFields_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__YFields_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__YFields_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ZFields_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ZFields_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__noteFieldArray() const;

constexpr ::System::Object*& __cordl_internal_get__noteFieldArray() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteFieldNoteData*>* const& __cordl_internal_get__noteFieldList() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::NoteFieldNoteData*>*& __cordl_internal_get__noteFieldList() ;

constexpr void __cordl_internal_set__FieldSize_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__XFields_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__YFields_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ZFields_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__noteFieldArray(::System::Object*  value) ;

constexpr void __cordl_internal_set__noteFieldList(::System::Collections::Generic::List_1<::VROSC::NoteFieldNoteData*>*  value) ;

/// @brief Method .ctor, addr 0x17b4f7c, size 0x458, virtual false, abstract: false, final false
inline void _ctor(::VROSC::NoteFieldParameters*  parameters) ;

/// @brief Method get_FieldSize, addr 0x17b681c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_FieldSize() ;

/// @brief Method get_XFields, addr 0x17b67e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_XFields() ;

/// @brief Method get_YFields, addr 0x17b67f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_YFields() ;

/// @brief Method get_ZFields, addr 0x17b6808, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ZFields() ;

/// @brief Method set_FieldSize, addr 0x17b6810, size 0xc, virtual false, abstract: false, final false
inline void set_FieldSize(::UnityEngine::Vector3  value) ;

/// @brief Method set_XFields, addr 0x17b67e0, size 0x8, virtual false, abstract: false, final false
inline void set_XFields(int32_t  value) ;

/// @brief Method set_YFields, addr 0x17b67f0, size 0x8, virtual false, abstract: false, final false
inline void set_YFields(int32_t  value) ;

/// @brief Method set_ZFields, addr 0x17b6800, size 0x8, virtual false, abstract: false, final false
inline void set_ZFields(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldData(NoteFieldData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldData(NoteFieldData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1453};

/// @brief Field <XFields>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____XFields_k__BackingField;

/// @brief Field <YFields>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____YFields_k__BackingField;

/// @brief Field <ZFields>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____ZFields_k__BackingField;

/// @brief Field <FieldSize>k__BackingField, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____FieldSize_k__BackingField;

/// @brief Field _noteFieldArray, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____noteFieldArray;

/// @brief Field _noteFieldList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::NoteFieldNoteData*>*  ____noteFieldList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldData, ____XFields_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldData, ____YFields_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldData, ____ZFields_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldData, ____FieldSize_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldData, ____noteFieldArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldData, ____noteFieldList) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldData, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteFieldData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldData*, "VROSC", "NoteFieldData");

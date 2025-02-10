#pragma once
// IWYU pragma private; include "VROSC/EmpadDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EmpadDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class TransformDataModel;
}
// Forward declare root types
namespace VROSC {
class EmpadDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EmpadDataModel);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EmpadDataModel
class CORDL_TYPE EmpadDataModel : public ::System::Object {
public:
// Declarations
/// @brief Field GroupId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_GroupId, put=__cordl_internal_set_GroupId)) int32_t  GroupId;

/// @brief Field Id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) int32_t  Id;

/// @brief Field IsPressureSensitive, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPressureSensitive, put=__cordl_internal_set_IsPressureSensitive)) bool  IsPressureSensitive;

/// @brief Field IsSpawner, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsSpawner, put=__cordl_internal_set_IsSpawner)) bool  IsSpawner;

/// @brief Field MidiNote, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MidiNote, put=__cordl_internal_set_MidiNote)) int32_t  MidiNote;

/// @brief Field Pitch, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Pitch, put=__cordl_internal_set_Pitch)) int32_t  Pitch;

/// @brief Field Position, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) ::ArrayW<float_t,::Array<float_t>*>  Position;

/// @brief Field Rotation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Rotation, put=__cordl_internal_set_Rotation)) ::ArrayW<float_t,::Array<float_t>*>  Rotation;

/// @brief Field SampleId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SampleId, put=__cordl_internal_set_SampleId)) int32_t  SampleId;

/// @brief Field SelectedIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedIndex, put=__cordl_internal_set_SelectedIndex)) int32_t  SelectedIndex;

/// @brief Field Size, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Size, put=__cordl_internal_set_Size)) float_t  Size;

/// @brief Field SpatialAnchorsUUIDs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpatialAnchorsUUIDs, put=__cordl_internal_set_SpatialAnchorsUUIDs)) ::System::Collections::Generic::List_1<::StringW>*  SpatialAnchorsUUIDs;

/// @brief Field TransformData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransformData, put=__cordl_internal_set_TransformData)) ::VROSC::TransformDataModel*  TransformData;

/// @brief Field Volume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

static inline ::VROSC::EmpadDataModel* New_ctor() ;

/// @brief Method Upgrade, addr 0x1840dbc, size 0xc0, virtual false, abstract: false, final false
inline void Upgrade(int32_t  savedVersion) ;

constexpr int32_t const& __cordl_internal_get_GroupId() const;

constexpr int32_t& __cordl_internal_get_GroupId() ;

constexpr int32_t const& __cordl_internal_get_Id() const;

constexpr int32_t& __cordl_internal_get_Id() ;

constexpr bool const& __cordl_internal_get_IsPressureSensitive() const;

constexpr bool& __cordl_internal_get_IsPressureSensitive() ;

constexpr bool const& __cordl_internal_get_IsSpawner() const;

constexpr bool& __cordl_internal_get_IsSpawner() ;

constexpr int32_t const& __cordl_internal_get_MidiNote() const;

constexpr int32_t& __cordl_internal_get_MidiNote() ;

constexpr int32_t const& __cordl_internal_get_Pitch() const;

constexpr int32_t& __cordl_internal_get_Pitch() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_Position() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_Position() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_Rotation() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_Rotation() ;

constexpr int32_t const& __cordl_internal_get_SampleId() const;

constexpr int32_t& __cordl_internal_get_SampleId() ;

constexpr int32_t const& __cordl_internal_get_SelectedIndex() const;

constexpr int32_t& __cordl_internal_get_SelectedIndex() ;

constexpr float_t const& __cordl_internal_get_Size() const;

constexpr float_t& __cordl_internal_get_Size() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_SpatialAnchorsUUIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SpatialAnchorsUUIDs() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get_TransformData() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get_TransformData() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr void __cordl_internal_set_GroupId(int32_t  value) ;

constexpr void __cordl_internal_set_Id(int32_t  value) ;

constexpr void __cordl_internal_set_IsPressureSensitive(bool  value) ;

constexpr void __cordl_internal_set_IsSpawner(bool  value) ;

constexpr void __cordl_internal_set_MidiNote(int32_t  value) ;

constexpr void __cordl_internal_set_Pitch(int32_t  value) ;

constexpr void __cordl_internal_set_Position(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_Rotation(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_SampleId(int32_t  value) ;

constexpr void __cordl_internal_set_SelectedIndex(int32_t  value) ;

constexpr void __cordl_internal_set_Size(float_t  value) ;

constexpr void __cordl_internal_set_SpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TransformData(::VROSC::TransformDataModel*  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

/// @brief Method .ctor, addr 0x1840e7c, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmpadDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmpadDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmpadDataModel(EmpadDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmpadDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmpadDataModel(EmpadDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{395};

/// @brief Field Id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Id;

/// @brief Field GroupId, offset: 0x14, size: 0x4, def value: None
 int32_t  ___GroupId;

/// @brief Field SampleId, offset: 0x18, size: 0x4, def value: None
 int32_t  ___SampleId;

/// @brief Field SelectedIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___SelectedIndex;

/// @brief Field MidiNote, offset: 0x20, size: 0x4, def value: None
 int32_t  ___MidiNote;

/// @brief Field IsPressureSensitive, offset: 0x24, size: 0x1, def value: None
 bool  ___IsPressureSensitive;

/// @brief Field IsSpawner, offset: 0x25, size: 0x1, def value: None
 bool  ___IsSpawner;

/// @brief Field Volume, offset: 0x28, size: 0x4, def value: None
 float_t  ___Volume;

/// @brief Field Pitch, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___Pitch;

/// @brief Field Size, offset: 0x30, size: 0x4, def value: None
 float_t  ___Size;

/// @brief Field Position, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___Position;

/// @brief Field Rotation, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___Rotation;

/// @brief Field TransformData, offset: 0x48, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ___TransformData;

/// @brief Field SpatialAnchorsUUIDs, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___SpatialAnchorsUUIDs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EmpadDataModel, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___GroupId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___SampleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___SelectedIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___MidiNote) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___IsPressureSensitive) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___IsSpawner) == 0x25, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___Volume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___Pitch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___Size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___Position) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___Rotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___TransformData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadDataModel, ___SpatialAnchorsUUIDs) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EmpadDataModel, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EmpadDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EmpadDataModel*, "VROSC", "EmpadDataModel");

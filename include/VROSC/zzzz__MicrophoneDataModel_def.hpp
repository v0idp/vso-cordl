#pragma once
// IWYU pragma private; include "VROSC/MicrophoneDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolDataModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicrophoneDataModel)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace VROSC {
class MicrophoneDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MicrophoneDataModel);
// Dependencies VROSC.ToolDataModel
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneDataModel
class CORDL_TYPE MicrophoneDataModel : public ::VROSC::ToolDataModel {
public:
// Declarations
 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field MicrophoneIsAttached, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_MicrophoneIsAttached, put=__cordl_internal_set_MicrophoneIsAttached)) bool  MicrophoneIsAttached;

/// @brief Field MicrophonePosition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MicrophonePosition, put=__cordl_internal_set_MicrophonePosition)) ::ArrayW<float_t,::Array<float_t>*>  MicrophonePosition;

/// @brief Field MicrophoneRotation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MicrophoneRotation, put=__cordl_internal_set_MicrophoneRotation)) ::ArrayW<float_t,::Array<float_t>*>  MicrophoneRotation;

/// @brief Field MicrophoneScale, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MicrophoneScale, put=__cordl_internal_set_MicrophoneScale)) ::ArrayW<float_t,::Array<float_t>*>  MicrophoneScale;

/// @brief Field MicrophoneSpatialAnchorsUUIDs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MicrophoneSpatialAnchorsUUIDs, put=__cordl_internal_set_MicrophoneSpatialAnchorsUUIDs)) ::System::Collections::Generic::List_1<::StringW>*  MicrophoneSpatialAnchorsUUIDs;

/// @brief Field PreampReverb, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreampReverb, put=__cordl_internal_set_PreampReverb)) float_t  PreampReverb;

/// @brief Field PreampVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreampVolume, put=__cordl_internal_set_PreampVolume)) float_t  PreampVolume;

/// @brief Field UseProximity, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseProximity, put=__cordl_internal_set_UseProximity)) bool  UseProximity;

 __declspec(property(get=get_Version)) int32_t  Version;

static inline ::VROSC::MicrophoneDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_MicrophoneIsAttached() const;

constexpr bool& __cordl_internal_get_MicrophoneIsAttached() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_MicrophonePosition() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_MicrophonePosition() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_MicrophoneRotation() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_MicrophoneRotation() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_MicrophoneScale() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_MicrophoneScale() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_MicrophoneSpatialAnchorsUUIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_MicrophoneSpatialAnchorsUUIDs() ;

constexpr float_t const& __cordl_internal_get_PreampReverb() const;

constexpr float_t& __cordl_internal_get_PreampReverb() ;

constexpr float_t const& __cordl_internal_get_PreampVolume() const;

constexpr float_t& __cordl_internal_get_PreampVolume() ;

constexpr bool const& __cordl_internal_get_UseProximity() const;

constexpr bool& __cordl_internal_get_UseProximity() ;

constexpr void __cordl_internal_set_MicrophoneIsAttached(bool  value) ;

constexpr void __cordl_internal_set_MicrophonePosition(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_MicrophoneRotation(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_MicrophoneScale(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_MicrophoneSpatialAnchorsUUIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PreampReverb(float_t  value) ;

constexpr void __cordl_internal_set_PreampVolume(float_t  value) ;

constexpr void __cordl_internal_set_UseProximity(bool  value) ;

/// @brief Method .ctor, addr 0x1873a34, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x1874700, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x1874740, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneDataModel(MicrophoneDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneDataModel(MicrophoneDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{539};

/// @brief Field MicrophoneIsAttached, offset: 0x30, size: 0x1, def value: None
 bool  ___MicrophoneIsAttached;

/// @brief Field MicrophonePosition, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___MicrophonePosition;

/// @brief Field MicrophoneRotation, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___MicrophoneRotation;

/// @brief Field MicrophoneScale, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___MicrophoneScale;

/// @brief Field MicrophoneSpatialAnchorsUUIDs, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___MicrophoneSpatialAnchorsUUIDs;

/// @brief Field PreampVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___PreampVolume;

/// @brief Field PreampReverb, offset: 0x5c, size: 0x4, def value: None
 float_t  ___PreampReverb;

/// @brief Field UseProximity, offset: 0x60, size: 0x1, def value: None
 bool  ___UseProximity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneDataModel, ___MicrophoneIsAttached) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataModel, ___MicrophonePosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataModel, ___MicrophoneRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataModel, ___MicrophoneScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataModel, ___MicrophoneSpatialAnchorsUUIDs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataModel, ___PreampVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataModel, ___PreampReverb) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDataModel, ___UseProximity) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneDataModel, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MicrophoneDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDataModel*, "VROSC", "MicrophoneDataModel");

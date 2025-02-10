#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Data/StdCommonParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StdCommonParams)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Services::Analytics::Internal {
class IBuffer;
}
// Forward declare root types
namespace Unity::Services::Analytics::Data {
class StdCommonParams;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Data::StdCommonParams);
// Dependencies System.Nullable`1<T>, System.Object
namespace Unity::Services::Analytics::Data {
// Is value type: false
// CS Name: Unity.Services.Analytics.Data.StdCommonParams
class CORDL_TYPE StdCommonParams : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BatteryLoad, put=set_BatteryLoad)) ::System::Nullable_1<double_t>  BatteryLoad;

 __declspec(property(get=get_BuildGuuid, put=set_BuildGuuid)) ::StringW  BuildGuuid;

 __declspec(property(get=get_ClientVersion, put=set_ClientVersion)) ::StringW  ClientVersion;

 __declspec(property(get=get_DeviceVolume, put=set_DeviceVolume)) ::System::Nullable_1<double_t>  DeviceVolume;

 __declspec(property(get=get_GameBundleID, put=set_GameBundleID)) ::StringW  GameBundleID;

 __declspec(property(get=get_GameStoreID)) ::StringW  GameStoreID;

 __declspec(property(get=get_Idfv, put=set_Idfv)) ::StringW  Idfv;

 __declspec(property(get=get_Platform, put=set_Platform)) ::StringW  Platform;

 __declspec(property(get=get_ProjectID, put=set_ProjectID)) ::StringW  ProjectID;

 __declspec(property(get=get_UasUserID, put=set_UasUserID)) ::StringW  UasUserID;

 __declspec(property(get=get_UserCountry)) ::StringW  UserCountry;

/// @brief Field <BatteryLoad>k__BackingField, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__BatteryLoad_k__BackingField, put=__cordl_internal_set__BatteryLoad_k__BackingField)) ::System::Nullable_1<double_t>  _BatteryLoad_k__BackingField;

/// @brief Field <BuildGuuid>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__BuildGuuid_k__BackingField, put=__cordl_internal_set__BuildGuuid_k__BackingField)) ::StringW  _BuildGuuid_k__BackingField;

/// @brief Field <ClientVersion>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClientVersion_k__BackingField, put=__cordl_internal_set__ClientVersion_k__BackingField)) ::StringW  _ClientVersion_k__BackingField;

/// @brief Field <DeviceVolume>k__BackingField, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__DeviceVolume_k__BackingField, put=__cordl_internal_set__DeviceVolume_k__BackingField)) ::System::Nullable_1<double_t>  _DeviceVolume_k__BackingField;

/// @brief Field <GameBundleID>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__GameBundleID_k__BackingField, put=__cordl_internal_set__GameBundleID_k__BackingField)) ::StringW  _GameBundleID_k__BackingField;

/// @brief Field <GameStoreID>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__GameStoreID_k__BackingField, put=__cordl_internal_set__GameStoreID_k__BackingField)) ::StringW  _GameStoreID_k__BackingField;

/// @brief Field <Idfv>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idfv_k__BackingField, put=__cordl_internal_set__Idfv_k__BackingField)) ::StringW  _Idfv_k__BackingField;

/// @brief Field <Platform>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Platform_k__BackingField, put=__cordl_internal_set__Platform_k__BackingField)) ::StringW  _Platform_k__BackingField;

/// @brief Field <ProjectID>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProjectID_k__BackingField, put=__cordl_internal_set__ProjectID_k__BackingField)) ::StringW  _ProjectID_k__BackingField;

/// @brief Field <UasUserID>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__UasUserID_k__BackingField, put=__cordl_internal_set__UasUserID_k__BackingField)) ::StringW  _UasUserID_k__BackingField;

/// @brief Field <UserCountry>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserCountry_k__BackingField, put=__cordl_internal_set__UserCountry_k__BackingField)) ::StringW  _UserCountry_k__BackingField;

static inline ::Unity::Services::Analytics::Data::StdCommonParams* New_ctor() ;

/// @brief Method SerializeCommonEventParams, addr 0x2e8f118, size 0x7bc, virtual false, abstract: false, final false
inline void SerializeCommonEventParams(::ByRef<::Unity::Services::Analytics::Internal::IBuffer*>  buf, ::StringW  callingMethodIdentifier) ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__BatteryLoad_k__BackingField() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__BatteryLoad_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__BuildGuuid_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__BuildGuuid_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ClientVersion_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ClientVersion_k__BackingField() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__DeviceVolume_k__BackingField() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__DeviceVolume_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__GameBundleID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__GameBundleID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__GameStoreID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__GameStoreID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Idfv_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Idfv_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Platform_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Platform_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ProjectID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ProjectID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UasUserID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UasUserID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserCountry_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserCountry_k__BackingField() ;

constexpr void __cordl_internal_set__BatteryLoad_k__BackingField(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set__BuildGuuid_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ClientVersion_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DeviceVolume_k__BackingField(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set__GameBundleID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__GameStoreID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Idfv_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Platform_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ProjectID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UasUserID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UserCountry_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e8d620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BatteryLoad, addr 0x2e8f0cc, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<double_t> get_BatteryLoad() ;

/// @brief Method get_BuildGuuid, addr 0x2e8f0e0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_BuildGuuid() ;

/// @brief Method get_ClientVersion, addr 0x2e8f0f0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ClientVersion() ;

/// @brief Method get_DeviceVolume, addr 0x2e8f0b8, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<double_t> get_DeviceVolume() ;

/// @brief Method get_GameBundleID, addr 0x2e8f078, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GameBundleID() ;

/// @brief Method get_GameStoreID, addr 0x2e8f070, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_GameStoreID() ;

/// @brief Method get_Idfv, addr 0x2e8f0a8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Idfv() ;

/// @brief Method get_Platform, addr 0x2e8f088, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Platform() ;

/// @brief Method get_ProjectID, addr 0x2e8f108, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ProjectID() ;

/// @brief Method get_UasUserID, addr 0x2e8f098, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UasUserID() ;

/// @brief Method get_UserCountry, addr 0x2e8f100, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserCountry() ;

/// @brief Method set_BatteryLoad, addr 0x2e8f0d8, size 0x8, virtual false, abstract: false, final false
inline void set_BatteryLoad(::System::Nullable_1<double_t>  value) ;

/// @brief Method set_BuildGuuid, addr 0x2e8f0e8, size 0x8, virtual false, abstract: false, final false
inline void set_BuildGuuid(::StringW  value) ;

/// @brief Method set_ClientVersion, addr 0x2e8f0f8, size 0x8, virtual false, abstract: false, final false
inline void set_ClientVersion(::StringW  value) ;

/// @brief Method set_DeviceVolume, addr 0x2e8f0c4, size 0x8, virtual false, abstract: false, final false
inline void set_DeviceVolume(::System::Nullable_1<double_t>  value) ;

/// @brief Method set_GameBundleID, addr 0x2e8f080, size 0x8, virtual false, abstract: false, final false
inline void set_GameBundleID(::StringW  value) ;

/// @brief Method set_Idfv, addr 0x2e8f0b0, size 0x8, virtual false, abstract: false, final false
inline void set_Idfv(::StringW  value) ;

/// @brief Method set_Platform, addr 0x2e8f090, size 0x8, virtual false, abstract: false, final false
inline void set_Platform(::StringW  value) ;

/// @brief Method set_ProjectID, addr 0x2e8f110, size 0x8, virtual false, abstract: false, final false
inline void set_ProjectID(::StringW  value) ;

/// @brief Method set_UasUserID, addr 0x2e8f0a0, size 0x8, virtual false, abstract: false, final false
inline void set_UasUserID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StdCommonParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StdCommonParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StdCommonParams(StdCommonParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StdCommonParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StdCommonParams(StdCommonParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11866};

/// @brief Field <GameStoreID>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____GameStoreID_k__BackingField;

/// @brief Field <GameBundleID>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____GameBundleID_k__BackingField;

/// @brief Field <Platform>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Platform_k__BackingField;

/// @brief Field <UasUserID>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____UasUserID_k__BackingField;

/// @brief Field <Idfv>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____Idfv_k__BackingField;

/// @brief Field <DeviceVolume>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ____DeviceVolume_k__BackingField;

/// @brief Field <BatteryLoad>k__BackingField, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ____BatteryLoad_k__BackingField;

/// @brief Field <BuildGuuid>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____BuildGuuid_k__BackingField;

/// @brief Field <ClientVersion>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____ClientVersion_k__BackingField;

/// @brief Field <UserCountry>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____UserCountry_k__BackingField;

/// @brief Field <ProjectID>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____ProjectID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____GameStoreID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____GameBundleID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____Platform_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____UasUserID_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____Idfv_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____DeviceVolume_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____BatteryLoad_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____BuildGuuid_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____ClientVersion_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____UserCountry_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Data::StdCommonParams, ____ProjectID_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Data::StdCommonParams, 0x78>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Data
NEED_NO_BOX(::Unity::Services::Analytics::Data::StdCommonParams);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Data::StdCommonParams*, "Unity.Services.Analytics.Data", "StdCommonParams");

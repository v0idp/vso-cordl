#pragma once
// IWYU pragma private; include "VROSC/BaseDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ChangeFlags_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataModel)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace VROSC {
class BaseDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BaseDataModel);
// Dependencies System.Object, VROSC.ChangeFlags
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BaseDataModel
class CORDL_TYPE BaseDataModel : public ::System::Object {
public:
// Declarations
/// @brief Field Flags, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::VROSC::ChangeFlags  Flags;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field SaveVersion, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_SaveVersion, put=__cordl_internal_set_SaveVersion)) int32_t  SaveVersion;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Method GetFirestoreData, addr 0x183cdcc, size 0x38, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* GetFirestoreData() ;

static inline ::VROSC::BaseDataModel* New_ctor() ;

/// @brief Method Serialize, addr 0x183cda4, size 0x28, virtual true, abstract: false, final false
inline ::StringW Serialize() ;

constexpr ::VROSC::ChangeFlags const& __cordl_internal_get_Flags() const;

constexpr ::VROSC::ChangeFlags& __cordl_internal_get_Flags() ;

constexpr int32_t const& __cordl_internal_get_SaveVersion() const;

constexpr int32_t& __cordl_internal_get_SaveVersion() ;

constexpr void __cordl_internal_set_Flags(::VROSC::ChangeFlags  value) ;

constexpr void __cordl_internal_set_SaveVersion(int32_t  value) ;

/// @brief Method .ctor, addr 0x183cd94, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x183cd4c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x183cd8c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDataModel(BaseDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDataModel(BaseDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{380};

/// @brief Field Flags, offset: 0x10, size: 0x4, def value: None
 ::VROSC::ChangeFlags  ___Flags;

/// @brief Field SaveVersion, offset: 0x14, size: 0x4, def value: None
 int32_t  ___SaveVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BaseDataModel, ___Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseDataModel, ___SaveVersion) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BaseDataModel, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BaseDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BaseDataModel*, "VROSC", "BaseDataModel");

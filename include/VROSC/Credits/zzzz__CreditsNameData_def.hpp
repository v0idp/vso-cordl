#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsNameData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreditsNameData)
// Forward declare root types
namespace VROSC::Credits {
class CreditsNameData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsNameData);
// Dependencies System.Object
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsNameData
class CORDL_TYPE CreditsNameData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Title)) ::StringW  Title;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _title, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__title, put=__cordl_internal_set__title)) ::StringW  _title;

static inline ::VROSC::Credits::CreditsNameData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::StringW const& __cordl_internal_get__title() const;

constexpr ::StringW& __cordl_internal_get__title() ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__title(::StringW  value) ;

/// @brief Method .ctor, addr 0x17dd41c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x17dd40c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Title, addr 0x17dd414, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Title() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsNameData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsNameData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsNameData(CreditsNameData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsNameData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsNameData(CreditsNameData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1586};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _title, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____title;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsNameData, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsNameData, ____title) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsNameData, 0x20>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsNameData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsNameData*, "VROSC.Credits", "CreditsNameData");

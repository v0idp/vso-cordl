#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsNameListData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreditsNameListData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC::Credits {
class CreditsNameData;
}
// Forward declare root types
namespace VROSC::Credits {
class CreditsNameListData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsNameListData);
// Dependencies System.Object
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsNameListData
class CORDL_TYPE CreditsNameListData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Footer)) ::StringW  Footer;

 __declspec(property(get=get_Header)) ::StringW  Header;

 __declspec(property(get=get_Names)) ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*  Names;

/// @brief Field _footer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__footer, put=__cordl_internal_set__footer)) ::StringW  _footer;

/// @brief Field _header, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::StringW  _header;

/// @brief Field _names, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__names, put=__cordl_internal_set__names)) ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*  _names;

static inline ::VROSC::Credits::CreditsNameListData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__footer() const;

constexpr ::StringW& __cordl_internal_get__footer() ;

constexpr ::StringW const& __cordl_internal_get__header() const;

constexpr ::StringW& __cordl_internal_get__header() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* const& __cordl_internal_get__names() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*& __cordl_internal_get__names() ;

constexpr void __cordl_internal_set__footer(::StringW  value) ;

constexpr void __cordl_internal_set__header(::StringW  value) ;

constexpr void __cordl_internal_set__names(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*  value) ;

/// @brief Method .ctor, addr 0x17dd404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Footer, addr 0x17dd3f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Footer() ;

/// @brief Method get_Header, addr 0x17dd3ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Header() ;

/// @brief Method get_Names, addr 0x17dd3fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>* get_Names() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsNameListData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsNameListData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsNameListData(CreditsNameListData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsNameListData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsNameListData(CreditsNameListData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1585};

/// @brief Field _header, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____header;

/// @brief Field _names, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameData*>*  ____names;

/// @brief Field _footer, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____footer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsNameListData, ____header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsNameListData, ____names) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsNameListData, ____footer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsNameListData, 0x28>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsNameListData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsNameListData*, "VROSC.Credits", "CreditsNameListData");

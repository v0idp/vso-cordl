#pragma once
// IWYU pragma private; include "GlobalNamespace/TwitchSecrets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TwitchSecrets)
// Forward declare root types
namespace GlobalNamespace {
class TwitchSecrets;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TwitchSecrets);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TwitchSecrets
class CORDL_TYPE TwitchSecrets : public ::System::Object {
public:
// Declarations
/// @brief Field BOT_ACCESS_TOKEN, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BOT_ACCESS_TOKEN, put=setStaticF_BOT_ACCESS_TOKEN)) ::StringW  BOT_ACCESS_TOKEN;

/// @brief Field BOT_NAME, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BOT_NAME, put=setStaticF_BOT_NAME)) ::StringW  BOT_NAME;

/// @brief Field BOT_REFRESH_TOKEN, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BOT_REFRESH_TOKEN, put=setStaticF_BOT_REFRESH_TOKEN)) ::StringW  BOT_REFRESH_TOKEN;

/// @brief Field CLIENT_ID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CLIENT_ID, put=setStaticF_CLIENT_ID)) ::StringW  CLIENT_ID;

/// @brief Field CLIENT_SECRET, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CLIENT_SECRET, put=setStaticF_CLIENT_SECRET)) ::StringW  CLIENT_SECRET;

static inline ::StringW getStaticF_BOT_ACCESS_TOKEN() ;

static inline ::StringW getStaticF_BOT_NAME() ;

static inline ::StringW getStaticF_BOT_REFRESH_TOKEN() ;

static inline ::StringW getStaticF_CLIENT_ID() ;

static inline ::StringW getStaticF_CLIENT_SECRET() ;

static inline void setStaticF_BOT_ACCESS_TOKEN(::StringW  value) ;

static inline void setStaticF_BOT_NAME(::StringW  value) ;

static inline void setStaticF_BOT_REFRESH_TOKEN(::StringW  value) ;

static inline void setStaticF_CLIENT_ID(::StringW  value) ;

static inline void setStaticF_CLIENT_SECRET(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwitchSecrets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwitchSecrets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TwitchSecrets(TwitchSecrets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwitchSecrets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwitchSecrets(TwitchSecrets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{60};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TwitchSecrets, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TwitchSecrets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TwitchSecrets*, "", "TwitchSecrets");

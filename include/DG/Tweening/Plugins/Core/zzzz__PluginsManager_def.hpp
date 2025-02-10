#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PluginsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PluginsManager)
namespace DG::Tweening::Plugins::Core {
template<typename T1,typename T2,typename TPlugOptions>
class ABSTweenPlugin_3;
}
namespace DG::Tweening::Plugins::Core {
class ITweenPlugin;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace DG::Tweening::Plugins::Core {
class PluginsManager;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Plugins::Core::PluginsManager);
// Dependencies System.Object
namespace DG::Tweening::Plugins::Core {
// Is value type: false
// CS Name: DG.Tweening.Plugins.Core.PluginsManager
class CORDL_TYPE PluginsManager : public ::System::Object {
public:
// Declarations
/// @brief Field _color2Plugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__color2Plugin, put=setStaticF__color2Plugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _color2Plugin;

/// @brief Field _colorPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__colorPlugin, put=setStaticF__colorPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _colorPlugin;

/// @brief Field _customPlugins, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__customPlugins, put=setStaticF__customPlugins)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::DG::Tweening::Plugins::Core::ITweenPlugin*>*  _customPlugins;

/// @brief Field _doublePlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__doublePlugin, put=setStaticF__doublePlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _doublePlugin;

/// @brief Field _floatPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__floatPlugin, put=setStaticF__floatPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _floatPlugin;

/// @brief Field _intPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__intPlugin, put=setStaticF__intPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _intPlugin;

/// @brief Field _longPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__longPlugin, put=setStaticF__longPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _longPlugin;

/// @brief Field _quaternionPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__quaternionPlugin, put=setStaticF__quaternionPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _quaternionPlugin;

/// @brief Field _rectOffsetPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rectOffsetPlugin, put=setStaticF__rectOffsetPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _rectOffsetPlugin;

/// @brief Field _rectPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rectPlugin, put=setStaticF__rectPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _rectPlugin;

/// @brief Field _stringPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__stringPlugin, put=setStaticF__stringPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _stringPlugin;

/// @brief Field _uintPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__uintPlugin, put=setStaticF__uintPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _uintPlugin;

/// @brief Field _ulongPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ulongPlugin, put=setStaticF__ulongPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _ulongPlugin;

/// @brief Field _vector2Plugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__vector2Plugin, put=setStaticF__vector2Plugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _vector2Plugin;

/// @brief Field _vector3ArrayPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__vector3ArrayPlugin, put=setStaticF__vector3ArrayPlugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _vector3ArrayPlugin;

/// @brief Field _vector3Plugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__vector3Plugin, put=setStaticF__vector3Plugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _vector3Plugin;

/// @brief Field _vector4Plugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__vector4Plugin, put=setStaticF__vector4Plugin)) ::DG::Tweening::Plugins::Core::ITweenPlugin*  _vector4Plugin;

/// @brief Method GetCustomPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPlugin,typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>* GetCustomPlugin() ;

/// @brief Method GetDefaultPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename TPlugOptions>
static inline ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>* GetDefaultPlugin() ;

/// @brief Method PurgeAll, addr 0x18e0d5c, size 0x90, virtual false, abstract: false, final false
static inline void PurgeAll() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__color2Plugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__colorPlugin() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::DG::Tweening::Plugins::Core::ITweenPlugin*>* getStaticF__customPlugins() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__doublePlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__floatPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__intPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__longPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__quaternionPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__rectOffsetPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__rectPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__stringPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__uintPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__ulongPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__vector2Plugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__vector3ArrayPlugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__vector3Plugin() ;

static inline ::DG::Tweening::Plugins::Core::ITweenPlugin* getStaticF__vector4Plugin() ;

static inline void setStaticF__color2Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__colorPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__customPlugins(::System::Collections::Generic::Dictionary_2<::System::Type*,::DG::Tweening::Plugins::Core::ITweenPlugin*>*  value) ;

static inline void setStaticF__doublePlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__floatPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__intPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__longPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__quaternionPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__rectOffsetPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__rectPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__stringPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__uintPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__ulongPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__vector2Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__vector3ArrayPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__vector3Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

static inline void setStaticF__vector4Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluginsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluginsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PluginsManager(PluginsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluginsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluginsManager(PluginsManager const& ) = delete;

/// @brief Field _MaxCustomPlugins offset 0xffffffff size 0x4
static constexpr int32_t  _MaxCustomPlugins{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Plugins::Core::PluginsManager, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Plugins::Core
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PluginsManager);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PluginsManager*, "DG.Tweening.Plugins.Core", "PluginsManager");

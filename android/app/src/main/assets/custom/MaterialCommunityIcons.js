var _interopRequireDefault=require("@babel/runtime/helpers/interopRequireDefault");Object.defineProperty(exports,"__esModule",{value:true});exports.getImageSourceSync=exports.getImageSource=exports.default=exports.Button=void 0;var _createIconSet=_interopRequireDefault(require("./lib/create-icon-set"));var _MaterialCommunityIcons=_interopRequireDefault(require("./glyphmaps/MaterialCommunityIcons.json"));var iconSet=(0,_createIconSet.default)(_MaterialCommunityIcons.default,'Material Design Icons','MaterialCommunityIcons.ttf');var _default=exports.default=iconSet;var Button=exports.Button=iconSet.Button,getImageSource=exports.getImageSource=iconSet.getImageSource,getImageSourceSync=exports.getImageSourceSync=iconSet.getImageSourceSync;